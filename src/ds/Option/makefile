default:
	@gcc -c -o main.o main.c 
	@gcc -c -o option.o option.c
	@gcc -o main main.o option.o
	$(MAKE) clean

clean:
	@rm -f main.o
	@rm -f option.o