/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strownjoin.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 17:13:44 by emgarcia          #+#    #+#             */
/*   Updated: 2021/12/05 17:17:51 by emgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "colores.h"

void	ft_strownjoin(char **s1, char *s2)
{
	size_t	i;
	size_t	j;
	char	*final;

	i = -1;
	j = -1;
	final = (char *)malloc(sizeof(char) * (ft_strlen(*s1) + ft_strlen(s2) + 1));
	if (!s1[0])
		i = 0;
	while (s1[0] && s1[0][++i] != '\0')
		final[i] = s1[0][i];
	if (!s2)
		j = 0;
	while (s2 && s2[++j] != '\0')
		final[i + j] = s2[j];
	final[i + j] = '\0';
	if (s1[0])
		free (s1[0]);
	s1[0] = final;
}
