CC = g++

SRCS := $(wildcard *.cpp)
OBJS := $(patsubst %.cpp,%.o, $(SRCS))
all: main
main: $(OBJS)
	$(CC) -o main $(OBJS)
.depend: $(SRCS)
	$(CC) -MM $(SRCS) > $@
sinclude .depend
clean:
	rm -f  *.o .depend main