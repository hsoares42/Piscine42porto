#include <stdio.h>
#include <string.h>

int ft_strncmp(char *s1, char *s2, unsigned int n)
{
    unsigned int i;
    int dif;

    i = 0;
    dif = 0;
    while ((i < n) && !dif && (s1[i] != '\0') && (s2[i] != '\0'))
    {
        dif = (unsigned char)s1[i] - (unsigned char)s2[i];
        i++;
    }
    if (i < n && !dif && (s1[i] != '\0') || (s2[i] != '\0'))
    {
        dif = (unsigned char)s1[i] - (unsigned char)s2[i];
    }
    return (dif);    
}

int main (void)
{
    char s1[] = "tudo bem";
    char s2[] = "tudo bem nada";
    char s3[] = "tudo";
    
    printf ("%d\n", ft_strncmp(s1, s2, 10));
    printf ("%d\n", ft_strncmp(s1, s3, 10));
    //printf ("%d\n", strncmp(s1, s2, 10));
    //printf ("%d\n", strncmp(s1, s3, 10));
}
