void ft_print_comb(void)
{       
    int     n1;
    int     n2;
    int     n3;

        for(n1 = 0; n1 < 10; n1++)
        {
            for(n2 = 0; n2 < 10; n2++)
            {
                for(n3 = 0; n3 < 10; n3++)
                {
                    if(n1 != n2 && n2 != n3 && n1 != n3)
                    {   if(n1 < n2 && n2 < n3)
                        {   
                           write(1, &n1, 1);
                           write(1, &n2, 1);
                           write(1, &n3, 1);
                        }  
                    }
                }
            }
        }

}