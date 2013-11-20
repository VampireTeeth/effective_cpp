CC=g++
CFLAGS=-c -Wall
SRC=src
DEBUG=debug

HEADERSFILES:=Dummy.h Student.h
SOURCEFILES:=Main.cpp Dummy.cpp Student.cpp

OBJECTS:=$(SOURCEFILES:%.cpp=$(DEBUG)/%.o)
SOURCES:=$(SOURCEFILES:%.cpp=$(SRC)/%.cpp)
HEADERS:=$(HEADERSFILES:%.h=$(SRC)/%.h)

EXECUTABLE=$(DEBUG)/Main

all:$(EXECUTABLE)

$(EXECUTABLE):$(OBJECTS) 
	@echo 'Linking $@ from $^'
	$(CC) $^ -o $@

$(DEBUG)/%.o:$(SRC)/%.cpp
	@echo 'Building $^'
	$(CC)  $^ $(CFLAGS) -o $@

clean:
	rm -rf $(OBJECTS) $(EXECUTABLE)

