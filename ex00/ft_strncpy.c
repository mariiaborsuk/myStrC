#include <stdio.h>
char	*ft_strncpy(char*dest, char*src, unsigned int n)
{
	 char	*start = dest;
	// while(n >0)
	// {
	// 	*dest++=*src++;
	// 	n--;
	// }
	// while(--n)
	// {
	// 	*dest++ = '\0';
	// }
	// return start;
	int i=0;
	while (i<n && src[i]!='\0')
	{
		dest[i]=src[i];
		i++;
	}
	dest[i]='\0';
	return dest;
}
int	main(void)
{
	char str1[]= "Mariia Borsuk";
	char str2[]="";
	char * result = ft_strncpy(str2, str1, 10);
	printf("%s",result);
	return 0;

}
