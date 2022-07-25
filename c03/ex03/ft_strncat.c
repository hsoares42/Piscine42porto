#include <string.h>
#include <stdio.h>

char *ft_strncat(char *dest, char *src, unsigned int nb)
{
    unsigned int a;
    unsigned int b;

    a = 0;
    b = 0;
    while (src[a] != '\0')
    {
        a++;
    }
    while (src[b] != '\0' && b < nb)
    {
        dest[a + b] = src[b];
        b++;
    }
    dest[a + b] = '\0';
    return (dest);
}

int		main(void)
{
	char dest[20] = "123";
	char src[] = "456789";
	unsigned int nb = 32;

	ft_strncat(dest, src, nb);
	printf("string final = %s", dest);

	return (0);
}