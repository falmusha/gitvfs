CC=cc
CFLAGS=-g -I../lib/libgit2-0.20.0/include -Wall -Wmissing-prototypes -Wno-missing-field-initializers
LDFLAGS= -L../lib/libgit2-0.20.0/
LIBRARIES += -lgit2 -lssl -lcrypto -lz
SOURCES=gitvfs.c
OBJECTS=$(SOURCES:.c=.o)
EXECUTABLE=gvfs

all: $(OBJECTS)
		$(CC) $(CFLAGS) $(LDFLAGS) -o $(EXECUTABLE) $(OBJECTS) $(LIBRARIES)

clean:
		rm $(EXECUTABLE) $(OBJECTS)
