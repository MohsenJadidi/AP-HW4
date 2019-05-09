CXX = g++
CXXFLAGS = -std=c++14 -Wall -c
LXXFLAGS = -std=c++14
OBJECTS = main.o shape.o twoDimensionalShape.o threeDimensionalShape.o square.o circle.o sphere.o cube.o point.o
TARGET = main


$(TARGET): $(OBJECTS)
	$(CXX) $(LXXFLAGS) $(OBJECTS) -o $(TARGET)
main.o: main.cpp
	$(CXX) $(CXXFLAGS) main.cpp
shape.o: shape.cpp shape.h
	$(CXX) $(CXXFLAGS) shape.cpp
twoDimensionalShape.o: twoDimensionalShape.cpp twoDimensionalShape.h
	$(CXX) $(CXXFLAGS) twoDimensionalShape.cpp
threeDimensionalShape.o: threeDimensionalShape.cpp threeDimensionalShape.h
	$(CXX) $(CXXFLAGS) threeDimensionalShape.cpp
square.o: square.cpp square.h
	$(CXX) $(CXXFLAGS) square.cpp
circle.o: circle.cpp circle.h
	$(CXX) $(CXXFLAGS) circle.cpp
sphere.o: sphere.cpp sphere.h
	$(CXX) $(CXXFLAGS) sphere.cpp
cube.o: cube.cpp cube.h
	$(CXX) $(CXXFLAGS) cube.cpp
point.o: point.cpp point.h
	$(CXX) $(CXXFLAGS) point.cpp	
clean:
	rm -f $(TARGET) $(OBJECTS)
