/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamauric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/18 09:48:05 by mamauric          #+#    #+#             */
/*   Updated: 2019/03/05 14:13:47 by mamauric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_display(int a, int b)
{
	ft_putchar(a);
	ft_putchar(b);
}

void	ft_print_combn(int n)
{
	int a;
	int b;
	int n;

	if (n > '0' && n < '10')
		a = '0';
	while (a <= '8')
	{
		b = a + 1;
		while (b <= '9')
		{
			ft_display(a, b);
			if (a != '8')
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
		}
		b = b + 1;
	}
}
