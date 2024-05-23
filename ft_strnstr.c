/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcluzan <lcluzan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 16:41:54 by lcluzan           #+#    #+#             */
/*   Updated: 2024/05/23 16:44:46 by lcluzan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char *ft_strnstr(const char *str, const char *to_find, size_t len)
{
	unsigned int i;
	unsigned int j;

	if (to_find[0] == '\0')
		return ((char *)str);
	i = 0;
	while (str[i] != '\0' && i < len)
	{
		j = 0;
		while (str[i + j] == to_find[j] && (i + j) < len)
		{
			if (to_find[j + 1] == '\0')
			{
				return ((char *)str + i);
			}
			j++;
		}
		i++;
	}
	return (0);
}
