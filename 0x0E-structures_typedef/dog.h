#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a poppy information
 * @name : First member
 * @age: Second member
 * @owner: Third member
 * Description: longer description
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - type def for struct dog
 */

typedef struct dog dog_t;

void int_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *name_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif
