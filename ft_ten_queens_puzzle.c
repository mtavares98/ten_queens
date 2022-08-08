/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gade-alm <gade-alm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 16:46:52 by mtavares          #+#    #+#             */
/*   Updated: 2022/08/08 17:42:16 by gade-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ten_queens.h"

void	burning_possibilities(int x, int y)
{
	int i;
	int j;

	i = j = -1;
	while(++i)
	{
		while(++j)
		{
			if (map[i][j] == 1)
				break;
		}
	}
}

void	ft_putnbr(int n)
{
	if (n > 9)
		ft_putnbr(n / 10);
	write (1, &"0123456789"[n % 10], 1);
}

// Check where the next queen can be inserted
void ft_queen_checker(int x, int y, int **map)
{
	int	i;
	int	j;
	
	i = -1;
	i = j;
	while (++i < 10)
	{
		while (++j < 10)
		{
			if (i == x)
				map[i][j]++;
			if (j == y)
				map[i][j]++;
			if ((x + y) % 2 == 0 && (i + j) % 2 == 0)
				map[i]
		}
	}
}

int ft_ten_queens_puzzle(void)
{
	int	i = -1, j = -1;
	int	map[10][10];

	while (++i < 10)
		while (++j < 10)
}
