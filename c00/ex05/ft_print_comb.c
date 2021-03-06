/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyu <gyu@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 01:58:54 by gyu               #+#    #+#             */
/*   Updated: 2021/03/11 14:21:52 by gyu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char comb[5];

	comb[0] = '0';
	comb[3] = ',';
	comb[4] = ' ';
	while (comb[0] <= '6')
	{
		comb[1] = comb[0] + 1;
		while (comb[1] <= '8')
		{
			comb[2] = comb[1] + 1;
			while (comb[2] <= '9')
			{
				write(1, comb, 5);
				comb[2]++;
			}
			comb[1]++;
		}
		comb[0]++;
	}
	write(1, "789", 3);
}
