CXX		= g++

.PHONY all: 001

001:
	$(CXX) 001_main.cpp -std=c++11 -o 001_main

.PHONY clean:
	$(RM) 001_main
