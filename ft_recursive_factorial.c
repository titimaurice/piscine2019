/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamauric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/23 21:20:19 by mamauric          #+#    #+#             */
/*   Updated: 2019/02/25 18:45:18 by mamauric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	if (nb < 0 || nb > 12)
		nb = 0;
	else if (nb == 0)
		nb = 1;
	else
		nb *= ft_recursive_factorial(nb - 1);
	return (nb);
}
