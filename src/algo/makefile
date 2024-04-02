default:
	@gcc -c -o palindrome.o palindrome.c
	@gcc -c -o stack.o ../ds/stack/stack.c
	@gcc -o main palindrome.o stack.o
	$(MAKE) clean

clean:
	@rm -f palindrome.o
	@rm -f stack.o

str:
	@gcc -o str str.c 
	@rm -f str.o

bit:
	@gcc -o bit bit.c 
	@rm -f bit.o