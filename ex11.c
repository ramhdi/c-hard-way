#include <stdio.h>

int main(int argc, char* argv[]) {
	int numbers[4] = {0};
	char name[4] = {'a'};

	// print the array contents raw
	printf("numbers: %d %d %d %d\n", numbers[0], numbers[1], numbers[2], numbers[3]);
	printf("name each: %c %c %c %c\n", name[0], name[1], name[2], name[3]);
	printf("name: %s\n", name);

	// set up numbers
	numbers[0] = 0;
	numbers[1] = 1;
	numbers[2] = 2;
	numbers[3] = 3;

	// set up name
	name[0] = 'R';
	name[1] = 'a';
	name[2] = 'm';
	name[3] = '\0';

	// print the array contents
	printf("numbers: %d %d %d %d\n", numbers[0], numbers[1], numbers[2], numbers[3]);          printf("name each: %c %c %c %c\n", name[0], name[1], name[2], name[3]);
    printf("name: %s\n", name);

	// another way to declare a string
	char* another = "Ram";
	printf("name each: %c %c %c %c\n", another[0], another[1], another[2], another[3]);
    printf("name: %s\n", another);

	return 0;
}
