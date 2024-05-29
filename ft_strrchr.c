/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcluzan <lcluzan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 16:45:06 by lcluzan           #+#    #+#             */
/*   Updated: 2024/05/29 15:19:58 by lcluzan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*ret;

	ret = 0;
	while (*s)
	{
		if (*s == c)
		{
			ret = (char *)s;
		}
		s++;
	}
	if (ret)
		return (ret);
	if (c == '\0')
	{
		return ((char *)s);
	}
	return (0);
}
