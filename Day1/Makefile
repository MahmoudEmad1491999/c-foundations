all : main.o
	gcc  -Wall -Wextra main.o -o run

main.o : main.c
	gcc -Wall -Wextra  main.c -c -o main.o

clean:
	rm -rvf ./run ./main.o

.PHONY: clean all
