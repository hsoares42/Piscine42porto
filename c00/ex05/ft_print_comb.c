#include <unistd.h>

void	ft_putchar(char a, char b, char c)
{
	    write(1, &a, 1);
	    write(1, &b, 1);
	    write(1, &c, 1);
	    if(a != '7' || b != '8'|| c != '9')
	    {
		write(1, ", ", 2);
		}		    
}

void ft_print_comb(void)
{       
    char	n1;
    char	n2;
    char	n3;

    n1 = '0';
        while(n1 <= '7')
        {
            n2 = n1 + 1;
            while(n2 <= '8')
            {
                n3 = n2 + 1;
                while(n3 <= '9')
                {
                    ft_putchar(n1, n2, n3);
               		n3++;
                }
                n2++;                      
            }
            n1++;    
        }	
}