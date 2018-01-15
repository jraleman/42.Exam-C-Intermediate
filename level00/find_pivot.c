int		find_pivot(int *arr, int n)
{
	int		ret = -1;
	int		sum = 0;
	int		left_sum = 0;

	for (int i = 0; i < n; i += 1)
		sum += arr[i];
	for (int i = 0; i < n; i += 1)
	{
		sum -= arr[i];
		if (left_sum == sum)
		{
			ret = i;
			break ;
		}
		left_sum += arr[i];
	}
	return (ret);
}
