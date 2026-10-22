CXX = g++
CXXFLAGS = -std=c++17 -Wall -Wextra -Werror -Isrc

all: program.exe

program.exe: src/main.cpp src/math.hpp
	$(CXX) $(CXXFLAGS) src/main.cpp -o program.exe

test.exe: src/test.cpp src/math.hpp
	$(CXX) $(CXXFLAGS) src/test.cpp -o test.exe

clean:
	rm -f program.exe test.exe

.PHONY: all clean
