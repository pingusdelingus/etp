# Compiler and Flags
CXX = g++
CXXFLAGS = -std=c++17 -g -Wall
# Homebrew paths for Apple Silicon (M1/M2/M3)
ANTLR_INC = -I/opt/homebrew/include/antlr4-runtime
ANTLR_LIB = -L/opt/homebrew/lib -lantlr4-runtime

# Project Files
TARGET = main
# This automatically finds all .cpp files in the current directory
SRCS = $(wildcard *.cpp)
OBJS = $(SRCS:.cpp=.o)

# Default Rule
all: $(TARGET)

# Link the executable
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) $(ANTLR_LIB) -o $(TARGET)

# Compile source files to object files
%.o: %.cpp
	$(CXX) $(CXXFLAGS) $(ANTLR_INC) -c $< -o $@

# Clean up build artifacts
clean:
	rm -f $(OBJS) $(TARGET)

# Debugging helper to see what files are being picked up
print:
	@echo "Sources: $(SRCS)"
	@echo "Objects: $(OBJS)"
