/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamauric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/14 14:39:08 by mamauric          #+#    #+#             */
/*   Updated: 2019/02/18 18:07:53 by mamauric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_numbers(void)
{
	int chiffre;

	chiffre = '0';
	while (chiffre <= '9')
	{
		ft_putchar(chiffre);
		chiffre = chiffre + 1;
	}
}
