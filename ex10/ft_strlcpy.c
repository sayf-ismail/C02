/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stun-ism <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 12:30:24 by stun-ism          #+#    #+#             */
/*   Updated: 2021/03/04 21:29:43 by stun-ism         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int n)
{
	unsigned int idx;

	idx = 0;
	while (*(src + idx) != '\0')
	{
		if (idx < n)
		{
			*(dest + idx) = *(src + idx);
		}
		if (idx + 1 == n)
		{
			*(dest + idx) = '\0';
		}
		idx++;
	}
	return (idx);
}
