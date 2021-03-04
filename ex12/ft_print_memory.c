/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stun-ism <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 22:13:50 by stun-ism          #+#    #+#             */
/*   Updated: 2021/03/04 22:39:16 by stun-ism         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	int				i;
	unsigned char	*loc;

	if (size)
	{
		loc = addr;
		i = 0;
		while (*loc != '\0')
		{
			if (*loc >= 32 && *loc <= 126)
				ft_putchar(loc);
			else
				ft_putchar('.');
		}
	}
	return (addr);
}
