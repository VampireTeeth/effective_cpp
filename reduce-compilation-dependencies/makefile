RM=rm -rf
CC=g++
CFLAGS=-g -c -Wall
SRCS:=Dep1.cpp BadDesignHeader.cpp GoodDesignHeader.cpp Client.cpp
SRC:=src
DEBUG:=debug
OBJECTS:=$(SRCS:%.cpp=$(DEBUG)/%.o)
EXECUTABLE:=$(DEBUG)/Main

all: $(EXECUTABLE)

$(EXECUTABLE):$(OBJECTS)
	$(CC) $^  -o $@

$(DEBUG)/%.o:$(SRC)/%.cpp
	$(CC) $^ $(CFLAGS) -o $@


clean:
	$(RM) $(OBJECTS) $(EXECUTABLE)

