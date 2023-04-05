#include "main.h"
/**
 * _strspn - Entry point
 * @s: input
 * @accept: input
 * Return: Always 0 (Success)
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int len = 0;
char *p_accept;
while (*s != "\0") 
{
        p_accept = accept;
        while (*p_accept != '\0') 
	{
            if (*s == *p_accept) 
	    {
                len++;
                break;
            }
            p_accept++;
        }
        if (*p_accept == '\0') 
	{
            return len;
        }
        s++;
}
    return len;
}
