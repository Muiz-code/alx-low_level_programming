#include <stdio.h>
/**
 *main - main block
 * prints alphabet in lowercase,
 *then print in uppercase, followed by new line.
 *Return: 0
 */
int main(void)
{
char c = 'a';

while (c <= 'z')
{
putchar(c);
c++;
}

c = 'A';

while (c <= 'Z')
{
putchar(c);
c++;
}
putchar('\n');
return (0);
}
