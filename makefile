.PHONY: clean prepare app test
bin/calc: prepare obj/main.o obj/calc.o
	gcc -Wall obj/main.o obj/calc.o -o bin/calc -lm

bin/test: prepare obj/calc.o obj/test.o obj/calctest.o
	gcc -Wall obj/calc.o obj/test.o obj/calctest.o -o bin/test -lm
	
obj/main.o: prepare src/main.c
	gcc -Wall -c src/main.c -o obj/main.o -lm
	
obj/calc.o: prepare src/calc.c
	gcc -Wall -c src/calc.c -o obj/calc.o -lm

obj/test.o: prepare test/test.c
	gcc -Wall -c test/test.c -o obj/test.o -lm -Isrc -Ithirdparty

obj/calctest.o: prepare test/calctest.c
	gcc -Wall -c test/calctest.c -o obj/calctest.o -lm -Ithirdparty

prepare: bin obj

app: bin/calc
	bin/calc

test: bin/test
	bin/test

bin:
	mkdir bin

obj:
	mkdir obj

clean:
	rm -f bin/*
	rm -f obj/*