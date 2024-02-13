#The first target is what is run if you just type 'make'
all : exec1 exec2

exec1 : file1.o library.o
	clang file1.o library.o -o exec1 -Wall -Wextra -g

exec2 : file2.o library.o
	clang file2.o library.o -o exec2 -Wall -Wextra -g

# Note we say here we need 'library.h', as we need to recompile if it changes.
# We don't need to recompile file1.o if library.c changes however.
file1.o : file1.c library.h
	clang file1.c -c -o file1.o -Wall -Wextra -g

file2.o : file2.c library.h
	clang file2.c -c -o file2.o -Wall -Wextra -g

library.o : library.c library.h
	clang library.c -c -o library.o -Wall -Wextra -g

# It is nice to have a clean target. Make sure you don't delete your source files!
# If you give no dependences, then the run always runs
clean :
	rm *.o exec1 exec2

