#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - Free structure.
 * @d: Pointer to a dog_t structure.
 */
void free_dog(dog_t *d)
{
	/*Free structure*/
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
