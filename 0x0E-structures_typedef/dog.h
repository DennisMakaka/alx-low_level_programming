#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a dog's basic info
 * @name: First member
 * @age: Second member
 * @owner: Third member
 *
 * Description: Longer description
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - Typedef for struct dog.
 */
typedef struct dog dog_t;

/**
 * init_dog - Initializes a variable of type struct dog.
 *
 * @d: Pointer to struct dog to initialize.
 * @name: Name to initialize.
 * @age: Age to initialize.
 * @owner: Owner to initialize.
 *
 * Description: This function initializes a struct dog with the provided
 * name, age, and owner values. If d is NULL, it allocates memory for the
 * struct dog.
 */
void init_dog(struct dog *d, char *name, float age, char *owner);

/**
 * print_dog - Prints the information of a struct dog.
 *
 * @d: Pointer to struct dog to print.
 *
 * Description: This function prints the information of a struct dog,
 * including its name, age, and owner.
 */
void print_dog(struct dog *d);

/**
 * new_dog - Creates a new struct dog with dynamic memory allocation.
 *
 * @name: Name for the new dog.
 * @age: Age for the new dog.
 * @owner: Owner for the new dog.
 *
 * Return: A pointer to the newly created struct dog, or NULL if memory
 * allocation fails.
 *
 * Description: This function creates a new struct dog and initializes it
 * with the provided name, age, and owner values.
 */
dog_t *new_dog(char *name, float age, char *owner);

/**
 * free_dog - Frees memory allocated for a struct dog.
 *
 * @d: Pointer to struct dog to free.
 *
 * Description: This function frees the memory allocated for a struct dog.
 */
void free_dog(dog_t *d);

/**
 * _strcpy - Copies a string.
 *
 * @dest: Destination buffer for the copied string.
 * @src: Source string to be copied.
 *
 * Return: A pointer to the destination buffer (dest).
 *
 * Description: This function copies the string from src to dest.
 */
char *_strcpy(char *dest, char *src);

/**
 * _strlen - Calculates the length of a string.
 *
 * @s: The input string.
 *
 * Return: The length of the string (number of characters).
 *
 * Description: This function calculates the length of the input string s.
 */
int _strlen(char *s);

#endif /* DOG_H */

