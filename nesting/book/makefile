srcs := $(wildcard *.cpp)
objects := $(patsubst %.cpp, %.o, $(srcs))
CC := g++
# condition control
all: $(objects)
ifeq ($(CC),g++)
	@echo $(objects)
else
	@echo $(objects)
endif

$(objects): %.o:%.cpp
	gcc -c $< -o $@
.PHONY: clean
clean:
	-rm -f $(objects)
