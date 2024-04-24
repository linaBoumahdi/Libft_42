/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboumahd <lboumahd@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 14:07:32 by lboumahd          #+#    #+#             */
/*   Updated: 2024/04/24 10:54:02 by lboumahd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	long	num;
	int		i;
	int		sign;
	int		tmp;

	i = 0;
	sign = 1;
	num = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
		if (str[i++] == '-')
			sign = -1;
	while ((str[i] >= '0' && str[i] <= '9') && str[i])
	{
		tmp = num;
		num = num * 10 + str[i] - '0';
		if (num < tmp)
			return (-1 * (sign > 0));
		i++;
	}
	return ((int)num * sign);
}
