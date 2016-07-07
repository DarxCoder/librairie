#include <unistd.h>

void	izi_bouzou(char c)
{
	write(1, &c, 1);
}

void	wesh_alors(int nb)
{
	if(nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if(nb <= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		ft_putchar(nb + '0');
	}
}
