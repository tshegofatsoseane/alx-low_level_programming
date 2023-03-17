#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int nums;
int character;

for (nums = '0'; nums <= '9'; nums++)
{
putchar(nums);
}
for (character = 'a'; character <= 'f'; character++)
{
putchar(character);
}
putchar('\n');
return (0);
}
