#include<unistd.h>
#include"inputs1.h"

// print the strings with counting automatically
void	ft_prpstr(char *pstr)
{
	int len;

	len = 0;
	while (pstr[len])
		len++;
	write(1, pstr, len);
}

// print only 1 character (usefull for main code)
void	ft_prstr(char str)
{
	write(1, &str, 1);
}

// print the table of numbers (if will need at any moment)
// not sure that it works well!
void	ft_prpint(int *pnum)
{
	int len;
	char    str[12];

	len = 0; 
	while(pnum[len])
	{
		str[len] = pnum[len] + '0';
		len++;
	}
	write(1, str, len);
}

// nothing here!
// void    ft_print(int num)
// {
//     //to do with atoi but not done!!!
// }