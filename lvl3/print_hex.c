int ft_atoi(char *s)
{
	int res = 0;
	int	count = 0;

	while (s[count])
	{
		res = res * 10 + (s[count] - 48);
		count ++;
	}
	return (res);
}

void	ft_print_hex(int nb)
{
	if (nb >= 16)
		ft_print_hex(nb / 16);
	write(1, &"0123456789abcdef"[nb % 16], 1);
}

int main(int ac, char **av)
{
	if (ac == 2)
		ft_print_hex(ft_atoi(av[1]));
	write(1, "\n", 1);
}
