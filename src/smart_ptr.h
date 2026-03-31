#include "types.h"
#include <stdalign.h>
#include <stdarg.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>

#ifndef SMART_PTR_HEADER

#define SMART_PTR_HEADER
#define ZEROED_MEM 1
#define UNZEROED_MEM 0

typedef struct {
    void (*dtor)(void *);
    size_t num_bytes;
    size_t refcount;
    alignas(max_align_t) char data[];
} smart_ptr;

static smart_ptr *get_s(void *ptr);
void *smalloc(u32 size, void (*f)(void *), b8 iszeroed);

// destructor
void sfree(smart_ptr *ptr);

//inline void sdes(void *p);
// accessor

// wtf is this garbage
typedef void (*variadic_func_ptr)(const char *, ...);

// move semantics on cleanup
//inline void decref(void *ptr);
void incref(smart_ptr *ptr);
// smart_ptr *move(smart_ptr *ptr);
void s_cpy(void *tis, void *that);
void variadic_func(const char *format, ...);
//void s_assign(void **dst, void *src);
inline static smart_ptr *get_s(void *ptr);

typedef struct {
    f32 x;
    f32 y;
} vec2;


int dot(vec2 *a, vec2 *b) { return (a->x * b->x) + (a->y * b->y); }
void printvec(vec2 *that) { printf("x:%f, y:%f \n", that->x, that->y); }

// this is how you (SHOULD) initialize a smart ptr
#define smart(name, atype, dstrtr, iszeroed)                                   \
    __attribute__((cleanup(decref))) atype *name =                             \
        smalloc(sizeof(atype), (dstrtr), (iszeroed))



#define move(src, dst)                                                         \
    do {                                                                       \
        dst = src;                                                             \
        src = NULL;                                                            \
    } while (0)


// assignment operator
#define set(dst, src) s_assign((void **)&(dst), (src))

#endif // end of SMART_PTR_HEADER




#ifdef SMART_PTR_IMPLEMENTATION



#include <assert.h>
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/mman.h>
#include <unistd.h>

void decref(void *p)
{
    //  printf("called decref \n");
    void *user_ptr = *(void **)p;

    if (!user_ptr) {
        return;
    }
    smart_ptr *start = get_s(user_ptr);
    //   printf("ref count is %zu \n", start->refcount);
    if ((--(start->refcount)) == 0) {
        //        printf("refcount is 0 \n");
        if (NULL != start->dtor) {
            //            printf("calling sdestructor\n");
            start->dtor(start);
        }
    }
}// end of decref


void s_assign(void **dst, void *src)
{
    if (*dst == src) {
        return;
    }
    if (src) {
        incref(get_s(src));
    }

    if (*dst) {
        decref(dst);
    }

    *dst = src;
}

// called everytime variable leaves scope

void* get_raw(smart_ptr * s)
{
  return s->data;
}

static smart_ptr *get_s(void *ptr)
{
    if (!ptr) {
        return NULL;
    }

    return (smart_ptr *)((char *)ptr - offsetof(smart_ptr, data));
} // end of gets

__attribute__((malloc)) void *smalloc(u32 size, void (*dtor)(void *),
                                      b8 iszeroed)
{
    smart_ptr *p;
    // Allocate the header + the user's requested size
    if (iszeroed) {
        p = calloc(1, (sizeof(smart_ptr) + size));
    } else {

        p = malloc(sizeof(smart_ptr) + size);
    }
    if (!p) {
        return NULL;
    }
    p->num_bytes = size;
    p->dtor = dtor;
    p->refcount = 1;

    return (void *)p->data;
}

void sdes(void *p) { free(p); }

void sfree(smart_ptr *ptr)
{
    if (ptr == NULL) {
        return;
    }
    smart_ptr *meta = get_s(ptr);

} // end of sfree

void incref(smart_ptr *ptr) { ptr->refcount++; }

void s_cpy(void *this, void *that)
{
    smart_ptr *in = get_s(this);
    smart_ptr *out = get_s(that);

    memcpy(out, in, in->num_bytes);
}// end of s_copy

#endif


