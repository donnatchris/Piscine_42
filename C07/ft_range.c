int *ft_range(int min, int max)
{
	
	int	*tab;
	int	i;

	if (min >= max)
		return (NULL);
	tab = (int *) malloc ((max - min) * sizeof (int));
	if (tab == NULL)
		return (NULL);
	i = 0;
	while (i < (max - min))
	{
		tab[i] = min + i;
		i++;
	}
	return (tab);
}
