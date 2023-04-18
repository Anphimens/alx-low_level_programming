#ifndef DOG_H
#define DOG_H

/**
 * struct dog - My name is dog and i am defining myself
 * @name: First member
 * @age: Second member
 * @owner: Third member
 *
 * Return: a call to the member in the struct
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
/* additiona; functions */
int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
