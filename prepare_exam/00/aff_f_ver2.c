/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_first_param.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyu </var/mail/gyu>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 21:13:26 by gyu               #+#    #+#             */
/*   Updated: 2021/03/17 21:22:11 by gyu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc,char **argv)
{
	int i = 0;
	if (argc < 2)
		write(1, "\n", 1);
	else
	{
		while (argv[1][i])
		{
			write(1, &argv[1][i], 1);
			i++;
		}
		write(1, "\n", 1);
	}
	return 0;
}
