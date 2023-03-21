#ifndef DOG_H
#define DOG_H

/**
 * struct dog - allows to combine data items of
 * different kinds
 * @name: name of dog
 * @age: age of dog
 * @owner: dog's owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
int _strlen(char *s);
char *_strcpy(char *x, char *y);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
