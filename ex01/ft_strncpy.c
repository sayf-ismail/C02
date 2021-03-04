/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stun-ism <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 12:30:24 by stun-ism          #+#    #+#             */
/*   Updated: 2021/03/04 15:49:36 by stun-ism         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int idx;

	idx = 0;
	while (idx < n && *(src + idx) != '\0')
	{
		*(dest + idx) = *(src + idx);
		idx++;
	}
	while (idx < n)
	{
		*(dest + idx) = '\0';
		idx++;
	}

	return (dest);
}
