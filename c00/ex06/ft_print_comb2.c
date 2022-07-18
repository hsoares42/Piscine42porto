void ft_print_comb2(void)
{
        int     n1;
        int     n2;
        int     n3;
        int     n4;
    for(n1 = 0; n1 < 10; n1++)
    {
        for(n2 = 0; n2 < 10; n2++)
        {
            for(n3 = 0; n3 < 10; n3++)
            {
                for(n4 = 0; n4 < 10; n4++)
                {                    
                    if((n1, n2) != (n3, n4))
                    {
                        write(n3, n4, " ", n1, n2); 
                    }                                 
                }
            }
        }
    }

}

