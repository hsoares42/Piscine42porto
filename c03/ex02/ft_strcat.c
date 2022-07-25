#include <string.h>
#include <stdio.h>
        
int ft_strlen (char *str)
{
    int i;
        
    i = 0;
    while (str[i] != '\0')
    {
        str++;
        i++;
    }
    return (i);
}

char *ft_strcat(char *dest, char *src)
{
    int ii;

    ii = ft_strlen(dest); 
    while (src[ii] != '\0' )
    {
        dest[ii] = *src;
        src++;
        ii++;
    }
    dest[ii] = '\0';
    return (dest);
}

int		main(void)
{
	char dest[20] = "123";
	char src[] = "456";

    ft_strcat(dest, src);
	printf("string final = %s\n", dest);

	return (0);
}