#ifndef DOG_H
#define DOG_H
/**
 *struct dog - structure
 *@name: dog's name
 *@age: dog's age
 *@owner: name of the dog's owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
void free_dog(dog_t *d);
#endif
