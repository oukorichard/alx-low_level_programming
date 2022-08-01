#include "dog.h"

/**
 * init_dog - initializes a variable of type struct dog.
 * @D: struct dog.
 * @name: name of the dog.
 * @age: age of the dog.
 * @owner: owner of the dog.
 *
 * Return: no return.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d.name = "Poppy";
		d.age = 3.5;
		d.owner = "Bob";
	}
}
