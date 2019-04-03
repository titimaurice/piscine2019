/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamauric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/23 21:25:01 by mamauric          #+#    #+#             */
/*   Updated: 2019/02/25 18:58:31 by mamauric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int i;
	int result;

	if (power == 0)
		return (1);
	else if (nb == 0 || power < 0)
		return (0);
	else
	{
		result = nb;
		i = 2;
		while (i <= power)
		{
			result *= nb;
			i++;
		}
		return (result);
	}
}
