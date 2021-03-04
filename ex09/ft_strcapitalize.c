/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stun-ism <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 15:53:35 by stun-ism          #+#    #+#             */
/*   Updated: 2021/03/04 20:55:54 by stun-ism         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int idx;
	int space;

	space = ' ';
	if (*(str + 0) >= 'a' && *(str + 0) <= 'z')
		*(str + 0) -= 32;
	idx = 0;
	while (*(str + idx) != '\0')
	{
		if (*(str + idx) == space)
		{
			if ((*(str + idx + 1) >= 'a' && *(str + idx + 1) <= 'z'))
				*(str + idx + 1) -= 32;
		}
		idx++;
	}
	return (str);
}
