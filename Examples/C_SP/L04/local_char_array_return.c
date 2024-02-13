// The take-home message for this program is that returning arrays in C, such 
// as a reference to the start of a local array in getFullFileName will not work
// as intended, so DON'T do this. Returning a reference to a string literal
// will work as done in getLocalStringLiteral, but is not that useful.

#include <stdio.h>
#include <string.h>

char *getLocalStringLiteral() {
	char *str = "Hello World";
	return str;
}


char *getFullFileName(char filename[], char extension[]) {
	int size = strlen(filename) + strlen(extension) + 2; // +2 for . and \0
	// the local fullname array will be allocated memory on the 
	// program stack, such that returning a reference to the start
	// of the array is dangerous, as the content may have been overwritten
	// by the time the caller wishes to use the array.
	char fullname[size];
	fullname[0] = '\0';
	strcat(fullname, filename);
	strcat(fullname, ".");
	strcat(fullname, extension);
	return fullname;
}


int main() {
	char *str1 = "";
	char *str2 = "";
	// getLocalStringLiteral returns a reference to a
	// fixed string literal which will cannot be overwritten
	// such that str1 should print properly.
	str1 = getLocalStringLiteral();
    printf("str1 = %s\n", str1);

    // The memory used in getFullFileName for the array fullname
    // is allocated on the stack, and will be re-used by the running program
    // after returning from getFullFileName, so could be overwritten by
    // subsequent calls to getFullFileName (depending on call-stack prior to call).
    // So, you don't get the right output when printing out the string starting at
    // the reference str2 if you call getFullFileName again prior to printing.
	str2 = getFullFileName("TestInputRunner", "csv");
	//    str1 = getFullFileName("HellInputRunner", "txt");
	str1 = getFullFileName("Hello", "txt");
	printf("str2 = %s\n", str2);
	return 0;
}
