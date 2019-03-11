#ifndef _DOG_H_
#define _DOG_H_
/**
 * struct dog - describes the sweet boy or girl
 * @name: name of dog
 * @age: how old is that dog?
 * @owner: who is the lucky person that gets to live with that dog?
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
 * typedef dog_t - defines a new name for type struct dog
 */
typedef struct dog dog_t;
int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
