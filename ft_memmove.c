/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcluzan <lcluzan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 17:21:55 by lcluzan           #+#    #+#             */
/*   Updated: 2024/05/29 15:01:36 by lcluzan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*d;
	const char	*s;
	size_t		i;

	d = (char *) dst;
	s = (const char *) src;
	i = -1;
	if (d < s)
	{
		while (i++ < len)
		d[i] = s[i];
	}
	else
	{
		while (len-- > 0)
		d[len] = s[len];
	}
	return (dst);
}
