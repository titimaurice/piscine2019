/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamauric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/21 09:17:51 by mamauric          #+#    #+#             */
/*   Updated: 2019/02/21 16:57:58 by mamauric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int i;
	int is_neg;
	int result;

	i = 0;
	is_neg = 0;
	result = 0;
	if (str[i] == '\t' || str[i] == '\n' || str[i] == '\r' || str[i] == '\f'
			|| str[i] == '\v' || str[i] == ' ')
		i++;
	if (str[i] == '-')
	{
		is_neg = 1;
		i++;
	}
	if (str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - 48);
		i++;
	}
	if (is_neg == 1)
		result *= -1;
	return (result);
}
