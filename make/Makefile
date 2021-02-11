$(CC) =gcc

cal:main.o add.o sub.o multi.o div.o prime_factor.o sqt.o factorial.o
	$(CC) main.o add.o sub.o multi.o div.o prime_factor.o sqt.o factorial.o -o cal
main.o:main.c lib.h
	$(CC) -c main.c 
	@echo "Main Function compile"
add.o:add.c lib.h
	$(CC) -c add.c 
	@echo "Addition Function compile"
sub.o:sub.c lib.h
	$(CC) -c sub.c
	@echo "substraction Function compile"
multi.o:multi.c lib.h
	$(CC) -c multi.c 
	@echo "Multiplication Function compile"
div.o:div.c lib.h
	$(CC) -c div.c 
	@echo "Division Function compile"
prime_factor.o:prime_factor.c lib.h
	$(CC) -c prime_factor.c
	@echo "PrimeFactor Function compile"
sqt.o:sqt.c lib.h
	$(CC) -c sqt.c
	@echo "Sqt Function compile"
factorial.o:factorial.c lib.h
	$(CC) -c factorial.c
	@echo "Factorial Function compile"
clean:
	rm *.o cal

