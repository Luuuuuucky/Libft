/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pameyer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 14:21:50 by pameyer           #+#    #+#             */
/*   Updated: 2023/10/19 20:03:55 by pameyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	int				c;
	unsigned char	*str;

	c = 0;
	str = s;
	while (n)
	{
		*str = (unsigned char) c;
		str++;
		n--;
	}
}
