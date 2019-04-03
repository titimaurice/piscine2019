/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamauric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/23 21:28:18 by mamauric          #+#    #+#             */
/*   Updated: 2019/02/25 19:02:28 by mamauric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_power(int nb, int power)
{
	if (power == 0)
		return (1);
	else if (nb == 0 || power < 0)
		return (0);
	else
	{
		nb = nb * ft_recursive_power(nb, power - 1);
		return (nb);
	}
}
