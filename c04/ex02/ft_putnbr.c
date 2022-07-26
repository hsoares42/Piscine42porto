//#include <unistd.h>

void	ft_put(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2", 2);
		nb = 147483648;
	}
	if (nb < 0)
	{
		ft_put('-');
		nb = -nb;
	}
	if (nb < 10)
	{
		ft_put(nb + '0');
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}

int	main()
{
	ft_putnbr(-2147483648);
	return (0);
}