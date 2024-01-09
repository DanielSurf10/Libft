/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   teste_split.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danbarbo <danbarbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 16:43:48 by danbarbo          #+#    #+#             */
/*   Updated: 2023/12/18 15:04:56 by danbarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main()
{
	char	**splited = ft_split("bom-dia-tudo-bem", '-');
	int		i = 0;

	while (splited[i])
	{
		printf("%s\n", splited[i]);
		free(splited[i]);
		i++;
	}
	printf("NULL\n");
	free(splited);

	return (0);
}
