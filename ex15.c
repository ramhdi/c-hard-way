#include <stdio.h>

int main(int argc, char* argv[]) {
	// create two arrays
	int ages[] = {11, 22, 33, 44, 55};
	char* names[] = {
		"Alice", "Bob", "Charlie", "Dan", "Eric"
	};

	// get size of ages
	int count = sizeof(ages)/sizeof(int);

	// first way of using indexing
	for (int i = 0; i < count; i++) {
		printf("%s is %d years old.\n", names[i], ages[i]);
	}
	printf("\n---\n");

	// set up pointers to the start of the arrays
	int* cur_age = ages;
	char** cur_name = names;

	// second way using pointers
	for (int i = 0; i < count; i++) {
		printf("%s is %d years old.\n", *(cur_name+i), *(cur_age+i));
	}
	printf("\n---\n");

	// third way, pointers are just arrays
	for (int i = 0; i < count; i++) {
		printf("%s is %d years old.\n", cur_name[i], cur_age[i]);
	}
	printf("\n---\n");

	// fourth way, pure nonsense
	// this is how you can create a funny error
	// for (cur_name = names, cur_age = ages; (cur_name - names) < count; cur_age++) {
	for (cur_name = names, cur_age = ages; (cur_name - names) < count; cur_name++, cur_age++) {
		printf("%s is %d years old.\n", *cur_name, *cur_age);
	}

	return 0;
}
