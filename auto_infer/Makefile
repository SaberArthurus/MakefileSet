srcs := $(wildcard *.cpp)
objects := $(patsubst %.cpp, %.o, $(srcs))
CC = g++
edit: $(objects)
	$(CC) -o edit $(objects)
.PHONY: clean
clean:
	-rm $(objects) edit

