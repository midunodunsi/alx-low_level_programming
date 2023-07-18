#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees memory thats allocated for struct dog
 * @d: struct dog to be freed
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
