CXX = g++
CXXFLAGS = -g3 -Wall -lm
MKDIR = mkdir -p

LIBS = -lm

directorios:
	$(MKDIR) build dist

main.o: directorios main.cpp
	$(CXX) $(CXXFLAGS) -c main.cpp -o build/main.o

ramo.o: directorios ramo.cpp 
	$(CXX) $(CXXFLAGS) -c ramo.cpp -o build/ramo.o

funciones.o: directorios funciones.cpp 
	$(CXX) $(CXXFLAGS) -c funciones.cpp -o build/funciones.o
	
all: clean main.o funciones.o ramo.o
	$(CXX) $(CXXFLAGS) -o dist/programa build/main.o build/funciones.o build/ramo.o $(LIBS)
	rm -fr build 

clean:
	rm -fr *.o a.out core programa dist build

.DEFAULT_GOAL := all