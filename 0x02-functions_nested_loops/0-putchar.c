#include "main.h"
/**
 * main - print _putchar as a message
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
int val[] = {95, 112, 117, 116, 99, 104, 97, 114};
int t, sz;
sz = sizeof(val)/sizeof(int); // gives 8

for (t = 0; t < sz; t++)
{
_putchar(val[t]);
}

_putchar('\n');
return(0);
}
