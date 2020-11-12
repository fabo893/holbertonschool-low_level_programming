#ifndef DOG_H
#define DOG_H

#include <stdio.h>
#include <stdlib.h>

/* _PUTCHAR */
int _putchar(char c);


/* TASK 0 */

/**
 * struct dog - define a struct dog.
 * @name: pointer to char to give a name.
 * @age: type float to give a number for the age.
 * @owner: pointer to char to give a owner name.
 *
 * Description: struct to create a profile for a dog.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};



/* TASK 1 */

void init_dog(struct dog *d, char *name, float age, char *owner);



/* TASK 2 */

void print_dog(struct dog *d);


/* TASK 3 */

typedef struct dog dog_t;


/* TASK 4 */

dog_t *new_dog(char *name, float age, char *owner);


#endif /* DOG_H */
