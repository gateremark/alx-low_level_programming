#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Short description
 * @name: pointer to the name of the dog
 * @age: Sage of the dog
 * @owner: owner of the dog
 *
 * Description: Longer description
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

/**
 * dog_t - typedef for struct dog
 */
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
