CC ?= gcc
CFLAGS ?= -Wall
LDLIBS ?= -lm

ouverture-texts: ouverture-texts.o lecture.o
	$(CC) $(CFLAGS) -o ouverture-texts ouverture-texts.o lecture.o $(LDLIBS)
ouverture-texts.o: ouverture-texts.c
	$(CC) $(CFLAGS) -o ouverture-texts.o -c ouverture-texts.c
lecture.o: lecture.c
	$(CC) $(CFLAGS) -o lecture.o -c lecture.c

.PHONY: clean
clean:
	rm -rf *.o
	rm -f ouverture-texts