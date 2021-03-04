/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stun-ism <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 21:34:58 by stun-ism          #+#    #+#             */
/*   Updated: 2021/03/04 22:08:49 by stun-ism         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int idx;

	idx = 0;
	while (*(str + idx) != '\0')
	{
		if ((*(str + idx) >= 32 || *(str + idx) <= 126))
			ft_putchar(*(str + idx));
		else if ((*(str + idx) < 32 || *(str + idx) > 126))
		{
			ft_putchar('\\');
			ft_putchar("0123456789abcdef"[*(str + idx) / 16]);
			ft_putchar("0123456789abcdef"[*(str + idx) % 16]);
		}
		else if (*(str + idx) == '\0')
			break ;
		idx++;
	}
}
