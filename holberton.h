#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
/**
 * struct dog- Defines the name, age and owner of a dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Description: struct dog defines variables to store data
 * from a dog, like the name of the dog, its age
 * and the name of the owner
 */

typedef struct complex {
	double re;
	double im;
} complex;

void display_complex_number(complex c);

#endif /* MAIN_H */
