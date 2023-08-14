#ifndef Dog
#define Dog

/**
 * struct dog - Defining a dog structure
 * @name: Dog name pointer
 * @age: Dog age
 * @owner: Dog owner pointer
 *
 * Description: This structure defines a dog comprised of its name,
 * 		age and owner
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

#endif


