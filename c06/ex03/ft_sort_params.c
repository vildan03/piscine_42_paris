/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vikaradu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 20:17:07 by vikaradu          #+#    #+#             */
/*   Updated: 2025/07/18 12:12:57 by vikaradu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

void	sort(char *argv[], int argc)
{
	char	*temp;
	int		f;
	int		swapped;

	f = 1;
	swapped = 1;
	while (swapped == 1)
	{
		swapped = 0;
		f = 1;
		while (f < argc - 1)
		{
			if (ft_strcmp(argv[f], argv[f + 1]) > 0)
			{
				temp = argv[f];
				argv[f] = argv[f + 1];
				argv[f + 1] = temp;
				swapped = 1;
			}
			++f;
		}
	}
}

void	write_array(int argc, char *argv[])
{
	int	s;
	int	f;

	f = 1;
	while (f < argc)
	{
		s = 0;
		while (argv[f][s] != '\0')
		{
			write (1, &argv[f][s], 1);
			++s;
		}
		write (1, "\n", 1);
		++f;
	}
}

int	main(int argc, char *argv[])
{	
	sort(argv, argc);
	write_array(argc, argv);
	return (0);
}
