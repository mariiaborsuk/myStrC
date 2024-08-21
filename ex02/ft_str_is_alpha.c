#include <stdio.h>
#include <unistd.h>
int ft_str_is_alpha(char *str)
{
int i=0;
while (str[i]!='\0')
{
	int num=(int) str[i];
	if((num < 65 || num > 90) && (num < 97 || num > 122))
		{
			return 0;

		}
i++;
}
return 1;
}
int	main(void)
{
	char str[]="MariiaBor ";
	printf("%d", ft_str_is_alpha(str));
	return 0;
}
