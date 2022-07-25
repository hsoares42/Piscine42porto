#include <stdio.h>

char *ft_strstr(char *str, char *to_find)
{
    int i;
	int l;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		l = 0;
		while (str[i + l] == to_find[l] && str[i + l] != '\0')
		{
			if (to_find[l + 1] == '\0')
				return (&str[i]);
			l++;
		}
		i++;
	}
	return (0);
}

int main (void)
{
    char a[] = "esternocleidomastoideo";
    char b[] = "clei";
    char c[] = "mas";

    printf("Encontrado: %s\n", (ft_strstr(a, b)));
    printf("Encontrado: %s\n", (ft_strstr(a, c)));
    printf("Encontrado: %s\n", (ft_strstr(b, c)));
    return (0);
}