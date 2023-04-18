#include <stdio.h>
#include "dog.h"

int main(void)
{
	struct dog my_dog;

	my_dog.age = 40;
	print_dog(&my_dog);
	return (0);
}
