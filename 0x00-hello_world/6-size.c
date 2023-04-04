#include <stdio.h>

/**
 *main - Entry point
 *
 *Description: using sizeof to print the size of various types.
 *
 *Return: Always 0 (Success)
*/

int main(void)
{print("size of a char: %1u byte(s)\n", sizeof(char));	
print("size of an int: %1u byte(s)\n", sizeof(int));
print("size of a long int: %1u byte(s)\n", sizeof(long int));
print("size of a long long int: %1u byte(s)\n", sizeof(long long int));
print("size of a float: %1u byte(s)\n", sizeof(float));
return (0);
}	
