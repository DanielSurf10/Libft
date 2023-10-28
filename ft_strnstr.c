/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danbarbo <danbarbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 19:04:19 by danbarbo          #+#    #+#             */
/*   Updated: 2023/10/28 06:25:07 by danbarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t n)
{
	size_t	i;
	size_t	i_str;
	char	*first;

	i = 0;
	i_str = 0;
	first = (char *) str;
	while (str[i_str] != '\0' && to_find[i] != '\0' && i_str < n)
	{
		if (str[i_str] == to_find[i])
		{
			if (first == 0)
				first = (char *) &str[i_str];
			i++;
		}
		else
		{
			i = 0;
			first = 0;
		}
		i_str++;
	}
	if (to_find[i] == '\0')
		return (first);
	return (0);
}
