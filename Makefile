CC ?= gcc
CFLAGS ?= -Wall
LDLIBS ?= -lm

ouverture_stops: ouverture_stops.o lecture.o
	$(CC) $(CFLAGS) -o ouverture_stops ouverture_stops.o lecture.o $(LDLIBS)
ouverture_stops.o: ouverture_stops.c
	$(CC) $(CFLAGS) -o ouverture_stops.o -c ouverture_stops.c
lecture.o: lecture.c
	$(CC) $(CFLAGS) -o lecture.o -c lecture.c

.PHONY: clean
clean:
	rm -rf *.o
	rm -f ouverture_stops