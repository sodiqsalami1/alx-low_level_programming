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

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
