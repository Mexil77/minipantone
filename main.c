/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 16:34:46 by emgarcia          #+#    #+#             */
/*   Updated: 2021/12/06 14:13:16 by emgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "colores.h"

int	main(void)
{
	char	*normal;
	char	*color;
	size_t	i;
	size_t	j;
	size_t	k;
	size_t	linea;

	color = NULL;
	normal = "\033[m";
	linea = 0;
	i = -1;
	while (++i < 9)
	{
		j = -1;
		while (++j < 8)
		{
			k = -1;
			while (++k < 8)
			{
				ft_strownjoin(&color, ft_itoa(i));
				ft_strownjoin(&color, ";3");
				ft_strownjoin(&color, ft_itoa(j));
				ft_strownjoin(&color, ";4");
				ft_strownjoin(&color, ft_itoa(k));
				ft_strownjoin(&color, "m");
				printf ("color : %s ", color);
				printf("\033[%s PRUEBA COLOR %s", color, normal);
				if (linea % 4 == 0)
					printf("\n");
				free (color);
				color = NULL;
				linea++;
			}
		}
	}
	return (0);
}
