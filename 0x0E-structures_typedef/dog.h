#ifndef Dog
#define Dog

/**
 * struct dog - Defining a dog structure
 * @name: Dog name pointer
 * @age: Dog age
 * @owner: Dog owner pointer
 *
 * Description: This structure defines a dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog - typedef for struct dog
 */
typedef struct dog dog;

/**
 * dog_t - typedef for struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif




