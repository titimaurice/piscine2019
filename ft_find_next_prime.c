/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamauric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/24 10:00:59 by mamauric          #+#    #+#             */
/*   Updated: 2019/02/25 17:58:10 by mamauric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_find_next_prime(int nb)
{
	int i;

	if (nb <= 2)
		return (2);
	else if (nb == 3 || nb == 5 || nb == 7)
		return (nb);
	else
	{
		i = 2;
		while (i < nb)
		{
			if (nb % i == 0)
				nb = ft_find_next_prime(nb + 1);
			i++;
		}
		return (nb);
	}
}
