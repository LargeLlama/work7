all: list.o driver.o
	@gcc -o list.out list.o driver.o

list.o: list.c list.h
	@gcc -c list.c

driver.o: driver.c list.h
	@gcc -c driver.c

clean:
	@rm *.o*

run:
	@./list.out
