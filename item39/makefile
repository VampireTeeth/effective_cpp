
CC:=g++
CFLAGS:=-c -g -Wall
DEBUGDIR:=debug
SOURCES:=banks.cpp main.cpp
OBJECTS:=$(SOURCES:%.cpp=$(DEBUGDIR)/%.o)
EXECUTABLE:=debug/main

all : $(EXECUTABLE)
	@echo $(OBJECTS)

$(EXECUTABLE) : $(OBJECTS)
	$(CC) -o $@ $^

$(DEBUGDIR)/%.o : %.cpp
	$(CC) $(CFLAGS) -o $@ $^

