#include <stdlib.h>
#include "dog.h"
/**
 * _strlen - Count the length of a string.
 * @s: String.
 * Return: Length.
 */
unsigned int _strlen(char *s)
{
	unsigned int c;

	for (c = 0; s[c]; c++)
		;

	return (c);
}

/**
 * _strcpy - Copy a strings.
 * @s: String.
 * Return: New copy string.
 */
char *_strcpy(char *s)
{
	char *copy = NULL;
	unsigned int size, i;

	/*Return NULL if s is empty*/
	if (s == NULL)
		return (NULL);
	/*Allocate memory*/
	size = _strlen(s);

	copy = malloc(sizeof(char) * (size + 1));

	if (copy == NULL)
		return (NULL);

	/*Copy string*/
	for (i = 0; s[i] != '\0'; i++)
		copy[i] = s[i];
	copy[i] = '\0';

	return (copy);
}

/**
 * new_dog - Create a new dog.
 * @name: Dog's name.
 * @age: Dog's age.
 * @owner: Dog's owner
 * Return: New dog.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	/*Create a pointer to new structure*/
	dog_t *my_new_dog = malloc(sizeof(dog_t));

	if (my_new_dog == NULL)
		return (my_new_dog);

	/*Inicialize structure*/
	my_new_dog->name = _strcpy(name);
	my_new_dog->age = age;
	my_new_dog->owner = _strcpy(owner);

	if (my_new_dog->name == NULL || my_new_dog->owner == NULL)
	{
		free(my_new_dog->name);
		free(my_new_dog->owner);
		free(my_new_dog);
		return (NULL);
	}
	return (my_new_dog);
}
