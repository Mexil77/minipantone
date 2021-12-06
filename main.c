/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 16:34:46 by emgarcia          #+#    #+#             */
/*   Updated: 2021/12/06 16:45:58 by emgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "colores.h"

void	ft_makecolor(char **color, size_t i, size_t j, size_t k)
{
	char	*aux;

	aux = ft_itoa(i);
	ft_strownjoin(color, aux);
	free (aux);
	ft_strownjoin(color, ";3");
	aux = ft_itoa(j);
	ft_strownjoin(color, aux);
	free (aux);
	ft_strownjoin(color, ";4");
	aux = ft_itoa(k);
	ft_strownjoin(color, aux);
	free (aux);
	ft_strownjoin(color, "m");
}

void	ft_print(char **color)
{
	static size_t	line = 0;

	printf ("color : %s ", *color);
	printf("\033[%s PRUEBA COLOR \033[m", *color);
	if (line % 4 == 0)
		printf("\n");
	free (color[0]);
	color[0] = NULL;
	line++;
}

int	main(void)
{
	char	*color;
	size_t	i;
	size_t	j;
	size_t	k;

	color = NULL;
	i = -1;
	while (++i < 9)
	{
		j = -1;
		while (++j < 8)
		{
			k = -1;
			while (++k < 8)
			{
				ft_makecolor(&color, i, j, k);
				ft_print(&color);
			}
		}
	}
	return (0);
}
