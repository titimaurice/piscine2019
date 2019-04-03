/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamauric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/15 11:31:42 by mamauric          #+#    #+#             */
/*   Updated: 2019/02/18 18:10:20 by mamauric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_display(int a, int b, int c)
{
	ft_putchar(a);
	ft_putchar(b);
	ft_putchar(c);
}

void	ft_print_comb(void)
{
	int a;
	int b;
	int c;

	a = '0';
	while (a <= '7')
	{
		b = a + 1;
		while (b <= '8')
		{
			c = b + 1;
			while (c <= '9')
			{
				ft_display(a, b, c);
				c++;
				if (a != '7')
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
			}
			b++;
		}
		a++;
	}
}
