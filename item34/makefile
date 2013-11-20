CC=g++
CFLAGS=-gc -Wall
SRCS:=Main.cpp Person.cpp
SRC:=src
DEBUG:=debug
OBJECTS:=$(SRCS:%.cpp=$(DEBUG)/%.o)

all: $(EXECUTABLE)

$(EXECUTABLE):$(OBJECTS)
	$(CC) $<  -o $@

$(DEBUG)/%.o:$(SOURCES)/%.cpp
	$(CC) $< $(CFLAGS) -o $@

