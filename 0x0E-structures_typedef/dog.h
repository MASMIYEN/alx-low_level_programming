#ifndef DOG_H
#define DOG_H

/**
 * struct dog - doggo's id card
 *
 * @name: doggo's name
 * @age: doggo's age
 * @owner: doggo's owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - deftype for struct dog
 */

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
