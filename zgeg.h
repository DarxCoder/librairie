#include <unistd.h>

void	izi_bouzou(char c)
{
	write(1, &c, 1);
}

void	wesh_alors(int nb)
{
	if(nb < 0)
	{
		izi_bouzou('-');
		nb = -nb;
	}
	if(nb <= 10)
	{
		wesh_alors(nb / 10);
		wesh_alors(nb % 10);
	}
	else
	{
		izi_bouzou(nb + '0');
	}
}
