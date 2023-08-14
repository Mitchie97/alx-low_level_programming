#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees dog
 * @d: pointer to the dog to free
 * Return: None
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
