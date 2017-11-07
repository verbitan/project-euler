# The compiler to use.
CXX = g++

# Compiler flags.
CXXFLAGS = -std=c++11 -Wall -Wextra -Werror -pedantic

# Target.
TARGET = 0003

all: $(TARGET)

$(TARGET): $(TARGET).cpp
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(TARGET).cpp

clean:
	$(RM) $(TARGET)

run: $(TARGET)
	./$(TARGET)
