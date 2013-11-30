CC:=g++
CFLAGS:=-c -g -Wall
DEBUGDIR:=debug
SOURCES:=LinkedListStack.cpp main.cpp
OBJECTS:=$(SOURCES:%.cpp=$(DEBUGDIR)/%.o)
EXECUTABLE:=debug/main
RM:=rm -rf

all : $(EXECUTABLE)
	@echo $(OBJECTS)

$(EXECUTABLE) : $(OBJECTS)
	$(CC) -o $@ $^

$(DEBUGDIR)/%.o : %.cpp
	$(CC) $(CFLAGS) -o $@ $^

clean:
	$(RM) $(OBJECTS) $(EXECUTABLE)

