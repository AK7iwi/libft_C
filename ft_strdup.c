/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 06:24:37 by mfeldman          #+#    #+#             */
/*   Updated: 2022/05/14 11:21:08 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

char *ft_strdup(const char *s)
{
	size_t	i;
	char	*dest;

	dest = (char *)malloc(sizeof (*s) * (ft_strlen(s) + 1));
	if (dest == 0)
		return (0);
	i = 0;
	while (i < ft_strlen(s))
	{
		dest[i] = s[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}


/*
int main()
{
	printf("%s", ft_strdup("OUI"));	
}
*/