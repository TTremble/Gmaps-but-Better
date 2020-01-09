CC ?= gcc
CFLAGS ?= -Wall
LDLIBS ?= -lm

ouverture_stops: ouverture_stops.o lecture.o
	$(CC) $(CFLAGS) -o ouverture_stop_times ouverture_stops.o ouverture_trips.o lecture.o $(LDLIBS)
ouverture_stops.o: ouverture_stops.c
	$(CC) $(CFLAGS) -o ouverture_stops.o -c ouverture_stops.c
ouverture_stops.o: ouverture_stop_times.c
	$(CC) $(CFLAGS) -o ouverture_stops_times.o -c ouverture_stop_time_.c
lecture.o: lecture.h
	$(CC) $(CFLAGS) -o lecture.o -c lecture.h

.PHONY: clean
clean:
	rm -rf *.o
	rm -f ouverture_stops