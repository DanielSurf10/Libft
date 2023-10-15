/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danbarbo <danbarbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 16:17:56 by danbarbo          #+#    #+#             */
/*   Updated: 2023/10/11 20:02:07 by danbarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*mem_src;
	char	*mem_dst;

	mem_src = (char *) src;
	mem_dst = (char *) dest;
	if (mem_dst > mem_src)
	{
		i = n;
		while (i > 0)
		{
			mem_dst[i - 1] = mem_src[i - 1];
			i--;
		}
	}
	else
	{
		i = 0;
		while (i < n)
		{
			mem_dst[i] = mem_src[i];
			i++;
		}
	}
	return (dest);
}
