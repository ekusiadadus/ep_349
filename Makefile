.phony:

build:
	g++ -std=c++23 -Wpedantic -Wall -Wextra -Wconversion -O3 -Werror main.cpp