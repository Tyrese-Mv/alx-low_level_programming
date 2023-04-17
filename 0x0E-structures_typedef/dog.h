#ifndef DOG_H
#define DOG_H
/**
 * struct dog - Struct for dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 */
typedef struct
{
	char *name;
	float age;
	char *owner;
} dog;
typedef dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
