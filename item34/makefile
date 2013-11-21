RM=rm -rf
CC=g++
CFLAGS=-g -c -Wall
SRCS:=PersonImpl.cpp Person.cpp  Main.cpp
SRC:=src
DEBUG:=debug
OBJECTS:=$(SRCS:%.cpp=$(DEBUG)/%.o)
EXECUTABLE:=$(DEBUG)/Main

all: $(EXECUTABLE)

$(EXECUTABLE):$(OBJECTS)
	$(CC) $<  -o $@

$(DEBUG)/%.o:$(SRC)/%.cpp
	$(CC) $< $(CFLAGS) -o $@


clean:
	$(RM) $(OBJECTS) $(EXECUTABLE)

