#include"inputs1.h"

// big but good if function to check for syntax
int	strange_if(char *argv[])
{
	int	i;

	i = 0;
	while (argv[1][i] != '\0' && i < 30)
	{
		if (argv[1][i] == ' ')
			if (!(argv[1][i + 1] == '4' || argv[1][i + 1] == '3'
				|| argv[1][i + 1] == '2' || argv[1][i + 1] == '1'))
				return (0);
		else if (argv[1][i] == '4' || argv[1][i] == '3'
				|| argv[1][i] == '2' || argv[1][i] == '1')
					if (argv[1][i + 1] != ' ')
						return (0);
		i++;
	}
	if (argv[1][31] != '\0')
		return (0);
	return (1);
}

// function to launch the check args check
int	check_args(char *argv[])
{
	int	i;

	i = 0;
	while (argv[1][i])
	{
		return (strange_if(argv));
	}
	return (0);
}