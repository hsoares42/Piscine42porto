#include <stdio.h>
//#include <unistd.h>

int ft_str_is_alpha(char *str)
{
    int c;

    c = 0;
    while(str[c] != '\0')
    {
        if((str[c]) < 'A' || ((str[c] > 'Z') && (str[c] < 'a')) || (str[c] > 'z'))
        {   
            return(0);
        }
        c++;           
    }
    return (1);

}

int main(void)
{
    char test1[] = "";
    char test2[] = "ABCDEFGhijklmnopq";
    char test3[] = "ABC abc áéíóú àèìòù âêîôû äëïöü \'\"(){}[]!?@#$&* wxyz WXYZ";

    //printf("%d\n", ft_str_is_alpha(test1));
    //printf("%d\n", ft_str_is_alpha(test2));
    printf("%d\n", ft_str_is_alpha(test3));
    return (0);
}