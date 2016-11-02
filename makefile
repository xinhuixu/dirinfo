test: dir.c
	gcc dir.c -o test

clean:
	rm *~

run: test
	./test
