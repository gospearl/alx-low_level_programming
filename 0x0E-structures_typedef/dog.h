#ifndef __HEADER__
#define __HEADER__

/**
 * struct dog - Dog attributes
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Dog's owner
 *
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
