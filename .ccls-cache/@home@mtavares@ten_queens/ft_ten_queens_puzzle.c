/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gade-alm <gade-alm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 16:46:52 by mtavares          #+#    #+#             */
/*   Updated: 2022/08/13 17:58:19 by mtavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ten_queens.h"

void	ft_putnbr(int n)
{
	if (n > 9)
		ft_putnbr(n / 10);
	write (1, &"0123456789"[n % 10], 1);
}

// Check where the next queen can be inserted and insert
void ft_queen_checker(int num_queen, int x, int m, int **map)
{
	int	i;

	i = -1;
	while (++i < 10)
	{
		if (x + i < 10)
			map[num_queen][x + i]++;
		if (x - i >= 0)
			map[num_queen][x - i]++;
		if (num_queen - i >= 0)
			map[num_queen - i][x]++;
		if (num_queen + i < 10)
			map[num_queen + i][x]++;
		if (num_queen + i < 10 && x + i < 10)
			map[num_queen + i][x + i]++;
		if (num_queen - i >= 0 && x + i < 10)
			map[num_queen - i][x + i]++;
		if (num_queen - i >= 0 && x - i >= 0)
			map[num_queen - i][x - i]++;
		if (num_queen + i < 10 && x - i >= 0)
			map[num_queen + i][x - i]++;
	}
}

int ft_ten_queens_puzzle(void)
{
	int counter;
	int num_queen;
	int	map[10][10];

	num_queen = 0;
	while (++num_queen < 10)
		;
	//ft_queen_checker(num_queen, ,&map);
	return (1);
}
