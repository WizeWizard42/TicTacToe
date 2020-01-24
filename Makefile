CXX = g++
CXXFLAGS = -g -Wall -Wextra -pedantic
SRCS = $(wildcard src/*.cpp)

main: $(SRCS)
	$(CXX) $(CXXFLAGS) -o $@ $^