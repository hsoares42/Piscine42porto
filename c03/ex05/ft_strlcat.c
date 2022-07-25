#include <stdio.h>

unsigned int	ft_strlen(char *str)
{
	unsigned int c;

	c = 0;
	while (*str != '\0')
	{
		c++;
		str++;
	}
	return (c);
}

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int t;
	unsigned int i;

	if (size <= ft_strlen(dest))
		return (size + ft_strlen(src));
	t = ft_strlen(dest);
	i = 0;
	while (src[i] != '\0' && t + 1 < size)
	{
		dest[t] = src[i];
		t++;
		i++;
	}
	dest[t] = '\0';
	return (ft_strlen(dest) + ft_strlen(&src[i]));
}
int		main(void)
{
	char dest[20] = "123";
	char src[] = "456789";

    ft_strlcat(dest, src, 20);
	printf("string final = %s\n", dest);

	return (0);
}