#ifndef _DOG_H_
#define _DOG_H_
/**
 * struct dog - a struct that create adog info
 *
 * @name: the dog name
 * @age: the age of the dog
 * @owner: the owner of the dog
 *
 * Description: first struct with alx
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
