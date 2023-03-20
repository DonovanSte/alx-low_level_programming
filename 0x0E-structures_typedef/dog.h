#ifndef DOG_H
#define DOG_H

/**
 * struct dog - A simple struct that contains variables
 * @name: Holds name of dog in char array
 * @age: Holds number, including any decimals
 * @owner: Holds name of owner in char array
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /* DOG_H */
