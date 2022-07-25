#include <stdio.h>
//#include <unistd.h>

char *ft_strcapitalize(char *str)

{
    int c;
    int i;

    c = 0;
    i = 0;
    while(str[c] != '\0')
    {
        if(i == 0 && (str[c] >= 'a') && (str[c] <= 'z'))
        {
            str[c] -= 32;
            i++;
        }
        else if(i > 0 && (str[c] >= 'A') && (str[c] >= 'Z'))
        {
        str[c] += 32;
        }
        else if((str[c] < '0') || (str[c] > '9' && str[c] < 'A')
        || (str[c] > 'Z' && str[c] < 'a') || (str[c] > 'z'))
        {
                i = 0;
        }else i++;
        c++;
    }
    return (str);
}

int     main(void)
{
        char test1[] = "oi, tudo bem? 42palavras quarenta-e-duas; cinquenta+e+um";
        char *point1;

        point1 = test1;


        printf("%s\n", ft_strcapitalize(point1));

        return (0);
}