/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ageorgey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 15:29:08 by ageorgey          #+#    #+#             */
/*   Updated: 2017/11/06 16:28:06 by ageorgey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int i;

	i = nb - 1;
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	else if (nb > 12)
		return (0);
	while (i >= 1)
	{
		nb = nb * i;
		i--;
	}
	return (nb);
}
