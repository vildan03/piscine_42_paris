#include"inputs1.h"

// check for spaces and print if error
int	i_less_arg(int argc, char *argv[])
{
	int	i;
	int	j;
	int	k;

	i = 1;
	k = 0;
	j = 0;
	while (i < argc)
	{
		while (argv[1][k] != '\0')
		{
			if (argv[1][k] == ' ')
				j++;
		k++;
		}
		i++;
		if (j != 15)
		{
			ft_prpstr("Error in your spaces!\n(needed: 15 for 4x4 table)");
			return (0);
		}
	}
	return (1);
}
