/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majdahim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/12 17:25:57 by majdahim          #+#    #+#             */
/*   Updated: 2019/10/23 00:16:55 by majdahim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	char		*d;
	char		*s;
	size_t		n;
	size_t		len;

	n = size;
	s = (char *)src;
	d = dst;
	while (n-- != 0 && *d)
		d++;
	len = d - dst;
	n = size - len;
	if (n == 0)
		return (len + ft_strlen(s));
	while (*s != '\0')
	{
		if (n != 1)
		{
			*d++ = *s;
			n--;
		}
		s++;
	}
	*d = '\0';
	return (len + (s - (char *)src));
}
