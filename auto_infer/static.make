srcs := $(wildcard *.cpp) 
objs := $(patsubst %.cpp, %.o, $(srcs)) foo.elc
objects := $(filter %.o,$(objs))
CC = g++

#static pattern
#<targets ...>:<target-pattern>:<prereq-patterns>
#    <commands>
all:  edit $(objects)#fake instr
	@echo $(objects)
$(objects): %.o:%.cpp
	$(CC) -c $< -o $@ 
edit: $(objects)
	$(CC) -o edit $(objects)
.PHONY: clean
clean: 
	-rm -f $(objects)


