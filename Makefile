CXX = g++
CXXFLAGS = -g -Wall -Wextra -Werror -pedantic
SRCS = $(wildcard src/*.cpp)

main: $(SRCS)
	$(CXX) $(CXXFLAGS) -o $@ $^