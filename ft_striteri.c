/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nouillebobby <nouillebobby@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 13:31:04 by nouillebobb       #+#    #+#             */
/*   Updated: 2024/05/28 13:34:48 by nouillebobb      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
    size_t  i;

    i = 0;
    while(s[i])
    {
        (*f)(i, s + i);
        i++;
    }
}
