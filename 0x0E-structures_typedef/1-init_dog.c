#include <stdio.h>
#includea "dog.h"

/**
 * init_dog - initializes a variable of type struct dog.
 * @dog: struct dog.
 * @name: name of the dog.
 * @age: age of the dog.
 * @owner: owner of the dog.
 *
 * Return: no return.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (dog)
	{
		dog->name = name;
		dog->age = age;
		dog->owner = owner;
	}
}
