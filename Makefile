CXX = g++
CXXFLAGS = -std=c++17 -Wall -Wextra -Werror -Isrc

all: program.exe

program.exe: src/main.cpp src/math.hpp
	$(CXX) $(CXXFLAGS) src/main.cpp -o program.exe

test.exe: tests/test.cpp src/math.hpp
	$(CXX) $(CXXFLAGS) tests/test.cpp -o test.exe

clean:
	rm -f program.exe test.exe

.PHONY: all clean
