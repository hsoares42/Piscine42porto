//#include <unistd.h>
#include <stdio.h>

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while(i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

int main(void)
{
	char inicio[] = "aaaaaaaaaaa";
	char dest[20];

	ft_strncpy(dest, inicio, 20);
	printf("%s\n", dest);
	return(0);
}
