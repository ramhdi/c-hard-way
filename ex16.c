#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
	char* name;
	int age;
	int height;
	int weight;
} Person;

Person* Person_create(char* name, int age, int height, int weight) {
	Person* who = malloc(sizeof(Person));

	assert(who != NULL);

	who->name = strdup(name);
	who->age = age;
	who->height = height;
	who-> weight = weight;

	return who;
}

void Person_destroy(Person* who) {
	assert(who != NULL);

	free(who->name);
	free(who);
}

void Person_print(Person* who) {
	printf("Name\t: %s\n", who->name);
	printf("Age\t: %d y.o.\n", who->age);
	printf("Height\t: %d cm\n", who->height);
	printf("Weight\t: %d kg\n", who->weight);
}

int main(int argc, char* argv[]) {
	// create two people
	Person* Joe = Person_create("Joe Mama", 32, 164, 55);
	Person* Frank = Person_create("Franklin D. Roosevelt", 73, 181, 92);

	// print the persons and their addresses
	printf("Joe's address is %p\n", Joe);
	Person_print(Joe);

	printf("Frank's address is %p\n", Frank);
	Person_print(Frank);
	
	// destroy Joe
	Person_destroy(Joe);
	
	printf("Joe's address is %p\n", Joe);
    Person_print(Joe);

    printf("Frank's address is %p\n", Frank);
    Person_print(Frank);

	// destroy Frank
    Person_destroy(Frank);

    printf("Joe's address is %p\n", Joe);
    Person_print(Joe);

    printf("Frank's address is %p\n", Frank);
    Person_print(Frank);
	
	return 0;
}
