#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int nums;
int nums1;

for (nums = '0'; nums <= '8'; nums++)
{
for (nums1 = '1'; nums1 <= '9'; nums1++)
{
putchar(nums);
putchar(nums1);
if (nums == '9' && nums1 == '9')
continue;
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
