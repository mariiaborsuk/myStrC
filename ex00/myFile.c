#include <stdio.h>
void	ft_sort_int_tab(int	*	tab, int	size);
int	main(void)
{
	int	array[7]={7, 5, 6, 67, 12, 32, 2};
	ft_sort_int_tab(array, 7);
	for (int	i=0; i< 7; i++)
	{
		printf("%d", array[i]);

	}
	printf('\n');
	return 0;
}
void	ft_sort_int_tab(int	*tab, int	size)
{

	int i = 0;
	while(i<size-1)
	{
int min_idx=i;
int j = i+1;
while(j<size){
	if (tab[j] < tab[min_idx])
	{
		min_idx=j;
	}
}
int temp =tab[min_idx];
tab[min_idx] = tab[i];
tab[i] =temp;

	}
}
