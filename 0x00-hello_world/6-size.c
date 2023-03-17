#include <stdio.h>
/**
 **main - Entry point
 ** Description: 'the program's description'
 ** Return: Always 0 (Success)
 **/
int main(void)
{
	printf("size of a char: %lu byte(s)\n", sizeof(char));
	printf("size of integer: %lu byte(s)\n", sizeof(int));
	printf("size of long int: %lu byte(s)\n", sizeof(long int));
	printf("size of long long int: %lu byte(s)\n", sizeof(long int));
	printf("size of a float: %lu byte(s)\n", sizeof(float));
	return (0);
}
