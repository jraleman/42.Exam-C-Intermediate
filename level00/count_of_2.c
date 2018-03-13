// function to count number of two's in a particular number
void	ft_counttwo(int nb, int *counter)
{
	if (nb >= 10)
	{
		ft_counttwo(nb / 10, counter);
		ft_counttwo(nb % 10, counter);
	}
	if (nb == 2)
	{
		*counter += 1;
	}
}

int	count_of_2(int nb)
{
	int i;
	int counter;
	
	i = 2;
	counter = 0;
	if (nb <= 1)
		return (0);
	while (i <= nb)
	{
		ft_counttwo(i, &counter);
		i++;
	}
	return (counter);
}
