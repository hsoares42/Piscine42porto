function ft_print_comb2()
{
    for(let n1 = 0; n1 < 10; n1++)
    {
        for(let n2 = 0; n2 < 10; n2++)
        {
            for(let n3 = 0; n3 < 10; n3++)
            {
                for(let n4 = 0; n4 < 10; n4++)
                {                    
                    if((n1, n2) != (n3, n4))
                    {
                        console.log(n3, n4, " ", n1, n2) 
                    }                                 
                }
            }
        }
    }

}

ft_print_comb2();
