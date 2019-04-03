/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamauric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/14 10:16:38 by mamauric          #+#    #+#             */
/*   Updated: 2019/02/18 17:19:42 by mamauric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char a);

void	ft_print_reverse_alphabet(void)
{
	char lettre;

	lettre = 'z';
	while (lettre >= 'a')
	{
		ft_putchar(lettre);
		lettre = lettre - 1;
	}
}
