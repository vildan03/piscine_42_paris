/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kshevche <kshevche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 10:21:09 by kshevche          #+#    #+#             */
/*   Updated: 2025/07/12 11:16:12 by kshevche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include"inputs1.h"

// main function to start the process
int	main(int argc, char *argv[])
{
	if (argc > 2)
	{
		ft_prpstr("Too many arguments, 1 is max!\n");
		return (1);
	}
	if (i_less_arg(argc, argv) != 1)
		return (1);
	if (check_args(argv) != 1)
		return(1);
	ft_prpstr("Hey this is a test");
	return (0);
}
