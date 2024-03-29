default:
	@gcc -c -o main.o main.c
	@gcc -c -o linked_list.o linked_list.c
	@gcc -o main main.o linked_list.o
	$(MAKE) clean

clean:
	@rm -f main.o
	@rm -f linked_list.o
