#include "lists.h"

/**
 * before_main - Prints a message before main() is executed.
 *
 * Description: This function is called automatically before main() is executed
 * to print a message to standard output.
 */
void __attribute__((constructor)) before_main()
{
	printf("You're beat! and yet, you must allow,\n"
	       "I bore my house upon my back!\n");
}
