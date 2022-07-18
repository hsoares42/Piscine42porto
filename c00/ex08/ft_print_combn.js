function ft_print_combn(n)
{ if(0 < n < 10)
    {
        for(let n1 = 0; n1 < 10; n1++)
        {
            for(let n2 = 0; n2 < 10; n2++)
            {
                if(n1 != n2 && n1 < n2)
                {
                    console.log(n1, n2)
                }
            }
        }    
    }

}

ft_print_combn(2);