/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lastword.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gh-yu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 02:26:55 by gh-yu             #+#    #+#             */
/*   Updated: 2021/03/19 02:41:51 by gh-yu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char **argv)
{
	char *temp;
	int i = 0;

	if (argc == 2)
	{	
		while (argv[1][i])
			i++;
		while (argv[1][i - 1] && argv[1][i - 1] != ' ' && argv[1][i - 1] != '\t')
		{
			temp = &argv[1][i - 1];
			i--;
		}
		while (*temp)
			write(1, temp++, 1);
	}
	write(1, "\n", 1);
	return (0);	
}
