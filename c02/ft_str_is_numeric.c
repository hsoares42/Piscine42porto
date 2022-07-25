#include <stdio.h>
//#include <unistd.h>

int ft_str_is_numeric(char *str)
{
    int c;

    c = 0;
    while(str[c] != '\0')
    {
        if(str[c] < '0' || str[c] > '9')
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
    char test2[] = "9876543210";
    char test3[] = "987ABC\'\"(){}[]!?@#$&* wxyz WXYZ";

    printf("%d\n", ft_str_is_numeric(test1));
    printf("%d\n", ft_str_is_numeric(test2));
    printf("%d\n", ft_str_is_numeric(test3));
    return (0);
}