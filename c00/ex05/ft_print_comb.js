function ft_print_comb()
{

        for(let n1 = 0; n1 < 10; n1++)
        {
            for(let n2 = 0; n2 < 10; n2++)
            {
                for(let n3 = 0; n3 < 10; n3++)
                {
                    if(n1 != n2 && n2 != n3 && n1 != n3)
                    {   if(n1 < n2 && n2 < n3)
                        {   
                            console.log(n1, n2, n3)
                        }  
                    }
                }
            }
        }

}

ft_print_comb();