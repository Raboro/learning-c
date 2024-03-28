default:
	@gcc -c -o main.o main.c 
	@gcc -c -o queue.o queue.c 
	@gcc -o main main.o queue.o
	$(MAKE) clean

clean:
	@rm -f main.o
	@rm -f queue.o