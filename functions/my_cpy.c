/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_cpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alukongo <alukongo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 21:33:17 by alukongo          #+#    #+#             */
/*   Updated: 2022/09/23 11:41:46 by alukongo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../cub3d.h"

int	my_cpy(char *dest, char *src, char *to_skip)
{
	int	i;
	
	i = 0;
	dest = malloc(sizeof(char) * ft_strlen(src) + 1);
	if(!dest)
		return(ERROR);
	while(src[i] == ' ')
		i++;
	if (ft_strncmp(src + i, to_skip, 5))
			return (ERROR);
	i += 5;
	dest = ft_strncpy(dest, src, ft_strlen2(src));
}
