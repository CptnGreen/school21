/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slisandr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/04 16:44:41 by slisandr          #+#    #+#             */
/*   Updated: 2019/03/05 13:59:55 by slisandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int i;
	int l;

	i = 0;
	while (dest[i] != '\0')
	{
		dest[i] = '\0';
		i = i + 1;
	}
	l = i;
	i = 0;
	while (src[i] != '\0' && i < l)
	{
		dest[i] = src[i];
		i = i + 1;
	}
	return (dest);
}