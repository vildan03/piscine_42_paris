#include <unistd.h>
int is_base_valid(char *base)
{ 	
	int i;
	i = 0;
	while(base[i] != '\0')
	{
		if(base[i] == '-' || base[i] == '+')
		{	
			return 0;
		}
		++i;
	}
	if(i == 0 || i == 1 )
	{
		return 0;
	}
	int p;
	p = 0;
	while(base[p] != '\0')
	{
		i = p + 1;
		while(base[i] != '\0')
		{	
			if(base[i] == base[p])
			{
				return 0;
			}
			++i;
		}
		++p;	
	}
	return 1;
}

void	putnbr_validated_base( int nbr,char *base)
{
write(1,"b",1); 
}




void	ft_putnbr_base(int nbr, char *base)
{
	 
	if(is_base_valid(base))
	{
		putnbr_validated_base(nbr,base);
		
	}

		
}
#include <stdio.h>
int main (void)
{
ft_putnbr_base(1,"-");
ft_putnbr_base(1,"-9");
ft_putnbr_base(1,"+-");
ft_putnbr_base(1,"+");
ft_putnbr_base(1,"9+");
ft_putnbr_base(1,"9-");
ft_putnbr_base(1,"1");
ft_putnbr_base(1,"");
ft_putnbr_base(1,"22");
ft_putnbr_base(1,"122");
ft_putnbr_base(1,"221");
ft_putnbr_base(1,"212");
ft_putnbr_base(1,"1231");
ft_putnbr_base(1,"123");
ft_putnbr_base(1,"123");
}
