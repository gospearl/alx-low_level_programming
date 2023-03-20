#include <stdlib.h>
#include "dog.h"

int _strlen(char *s);
char *_strcpy(char *dest, char *src);

/**
  * new_dog - ...
  * @name: ...
  * @age: ...
  * @owner: ...
  *
  * Return: ...
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog1;
	int len_name = 0, len_owner = 0;

	if (name != NULL && owner != NULL)
	{
		len_name = _strlen(name) + 1;
		len_owner = _strlen(owner) + 1;
		dog1 = malloc(sizeof(dog_t));

		if (dog1 == NULL)
			return (NULL);

		dog1->name = malloc(sizeof(char) * len_name);

		if (dog1->name == NULL)
		{
			free(dog1);
			return (NULL);
		}

		dog1->owner = malloc(sizeof(char) * len_owner);

		if (dog1->owner == NULL)
		{
			free(dog1->name);
			free(dog1);
			return (NULL);
		}

		dog1->name = _strcpy(dog1->name, name);
		dog1->owner = _strcpy(dog1->owner, owner);
		dog1->age = age;
	}

	return (dog1);
}

/**
  * _strlen - Returns the length of a string
  * @s: String to count
  *
  * Return: String length
  */
int _strlen(char *s)
{
	int i = 0;

	while(s[i])
	{
		i++;
	}

	return (i);
}

/**
  * _strcpy - Copy a string
  * @dest: Destination value
  * @src: Source value
  *
  * Return: the pointer to dest
  */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while(src[i])
	{
		dest[i] = src[i];
		i++;
	}

	dest[i++] = '\0';

	return (dest);
}
