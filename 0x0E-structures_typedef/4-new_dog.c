#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct dog
{
	char *name;
	float age;
	char *owner;

} dog_t;

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return NULL;

	/** Allocate memory for name string */
	new_dog->name = malloc(strlen(name) + 1);
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return NULL;
	}

	/** Allocate memory for owner string */
	new_dog->owner = malloc(strlen(owner) + 1);
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return NULL;
	}

	/** Store data in  new_dog pointer */
	strcpy(new_dog->name, name);
	new_dog->age = age;
	strcpy(new_dog->owner, owner);

	return new_dog;
}
