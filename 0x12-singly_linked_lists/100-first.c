#include "lists.h"
void ComeFirstbyCTC(void)__attribute__((constructor));
/**
 * ComeFirstbyCTC - funtion that run before the main function
 */
void ComeFirstbyCTC(void)
{
	printf("You're boat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
