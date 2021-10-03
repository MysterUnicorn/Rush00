/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgui <rgui@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 11:00:25 by rgui              #+#    #+#             */
/*   Updated: 2021/10/03 14:31:54 by rgui             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_first_row(int length_of_row)
{
	int	index2;

	index2 = length_of_row;
	if (length_of_row == 1)
	{
		ft_putchar('A');
	}
	else
	{
		ft_putchar('A');
		index2 = index2 - 2;
		while (index2)
		{
			ft_putchar('B');
			index2 = index2 - 1;
		}
		ft_putchar('C');
	}
}

void	print_last_row(int length_of_row)
{
	int	index2;

	index2 = length_of_row;
	if (length_of_row == 1)
	{
		ft_putchar('A');
	}
	else
	{
		ft_putchar('A');
		index2 = index2 - 2;
		while (index2)
		{
			ft_putchar('B');
			index2 = index2 - 1;
		}
		ft_putchar('C');
	}
}

void	print_middle_rows(int length_of_row)
{
	int	index2;

	index2 = length_of_row;
	while (index2)
	{
		if (index2 == length_of_row || index2 == 1)
		{
			ft_putchar('B');
		}
		else
		{
			ft_putchar(' ');
		}
		index2 = index2 - 1;
	}
}

void	rush(int x, int y)
{
	int	index;

	index = y;
	while (index)
	{
		if (index == y)
		{
			print_first_row(x);
		}
		else if (index == 1)
		{
			print_last_row(x);
		}
		else
		{
			print_middle_rows(x);
		}
		ft_putchar('\n');
		index = index - 1;
	}
}
