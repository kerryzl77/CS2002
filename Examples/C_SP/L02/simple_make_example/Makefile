
# If you just type 'make', the first rule is run
# so in this file, 'make prog' is the same as 'make'.
prog : file1.o file2.o
	clang file1.o file2.o -o prog

file1.o : file1.c
	clang -Wall -Wextra file1.c -c
# We could add '-o file1.o' here, that is what
# the file would be called anyway

file2.o : file2.c
	clang -Wall -Wextra file2.c -c
# We could add '-o file2.o' here, that is what
# the file would be called anyway


# If you put no dependencies, like this rule, then
# the rule is always run.
clean :
	rm file1.o file2.o prog