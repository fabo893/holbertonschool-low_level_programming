#ifndef DOG_H
#define DOG_H

#include <stdio.h>

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


#endif /* DOG_H */
