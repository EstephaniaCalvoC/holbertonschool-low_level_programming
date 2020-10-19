#ifndef _DOG
#define _DOG

/**
 * struct dog - Type dog
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Dog's owner
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog;

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
