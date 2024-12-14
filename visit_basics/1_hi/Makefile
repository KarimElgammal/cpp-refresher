CXX = g++
CXXFLAGS = -Wall -std=c++17

TARGET = hi

SOURCE = hi.cpp

all: $(TARGET)

$(TARGET): $(SOURCE)
	$(CXX) $(CXXFLAGS) $(SOURCE) -o $(TARGET)

clean:
	rm -f $(TARGET) $(TARGET).out

run: $(TARGET)
	./$(TARGET) | tee $(TARGET).out

.PHONY: all clean run