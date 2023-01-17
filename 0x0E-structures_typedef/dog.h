#ifndef DOG
#define DOG

/**
 * struct dog - defines the attributes of a dog
 * @name: name of the dog
 * @age: age of the dog in years
 * @owner: current owner of the dog
 *
 * Return: 0.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
typedef struct dog dog_t;

#endif
