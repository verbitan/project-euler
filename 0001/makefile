# The compiler to use.
CXX = g++

# Compiler flags.
CXXFLAGS = -std=c++11 -Wall -Wextra -Werror -pedantic

# Target.
TARGET = 0001

all: $(TARGET)

$(TARGET): $(TARGET).c
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(TARGET).c

clean:
	$(RM) $(TARGET)
