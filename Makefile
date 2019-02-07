CXX		= g++

.PHONY all: 001 002

001:
	$(CXX) 001_main.cpp -std=c++11 -o 001_main

002:
	$(CXX) 002_main.cpp -Wall -Wextra -Wpedantic -std=c++11 -o 002_main

.PHONY clean:
	$(RM) 001_main
	$(RM) 002_main
