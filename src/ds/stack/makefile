default:
	@gcc -c -o main.o main.c
	@gcc -c -o stack.o stack.c
	@gcc -o main main.o stack.o
	${MAKE} clean

clean:
	@rm -f main.o
	@rm -f stack.o