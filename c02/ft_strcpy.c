//#include <unistd.h>
#include <stdio.h>

char *ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while(src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

int main(void)
{
	char inicio[] = "abcdefgh";
	char dest[20];

	ft_strcpy(dest, inicio);
    printf("%s\n", dest);
	return(0);
}