/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 17:12:16 by emgarcia          #+#    #+#             */
/*   Updated: 2021/12/05 17:13:03 by emgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "colores.h"

static size_t	ft_intlen(int n)
{
	size_t	len;

	len = 0;
	while (n > 0)
	{
		len++;
		n /= 10;
	}
	return (len);
}

static int	ft_cpy_len(int n_cpy, size_t *len, int n)
{
	if (n <= 0)
	{
		*len += 1;
		if (n == -2147483648)
		{
			n_cpy = (n_cpy / 10) * -1;
			*len += 1;
		}
		else if (n < 0)
			n_cpy *= -1;
	}
	return (n_cpy);
}

char	*ft_itoa(int n)
{
	size_t	len;
	char	*str_num;
	int		n_cpy;

	len = 1;
	n_cpy = n;
	n_cpy = ft_cpy_len(n_cpy, &len, n);
	len += ft_intlen(n_cpy);
	str_num = (char *)malloc(sizeof(char) * len);
	if (str_num == NULL)
		return (NULL);
	str_num[--len] = '\0';
	if (n == -2147483648)
		str_num[--len] = '8';
	while (--len > 0)
	{
		str_num[len] = (n_cpy % 10) + '0';
		n_cpy /= 10;
	}
	if (n < 0)
		str_num[len] = '-';
	else
		str_num[len] = (n_cpy % 10) + '0';
	return (str_num);
}
