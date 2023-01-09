#include <stdio.h>

int	ft_atoi(char *nb)
{
	int res = 0;
	int i = 0;

	while (nb[i])
	{
		res = res * 10 + (nb[i] - 48);
		i++;
	}
	return (res);
}

int	is_prime(int nb)
{
	int i = 2;

	if (nb == 0 || nb == 1)
		return (0);
	while (i <= nb / 2)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int main(int ac,  char **av)
{
	int	res = 0;
	int	nbr;

	if (ac != 2)
		return 0;
	nbr = ft_atoi(av[1]);
	//la somme de tout les nombre premier inferieru ou egal au chiffre
	//donc pour 5 ==> 2 + 3 + 5 = 10
	while (nbr)
	{
		if (is_prime(nbr))
			res += nbr;
		nbr--;
	}
	printf("%d\n", res);
}
