SOURCES:= $(wildcard *.cpp) $(wildcard *.hpp)
OBJECTS:= $(wildcard *.cpp)
quicksort: $(SOURCES)
	g++ -std=c++14 -o quicksort $(OBJECTS)
