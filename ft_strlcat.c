/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: usenyure <usenyure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 15:44:53 by usenyure          #+#    #+#             */
/*   Updated: 2025/06/03 15:55:09 by usenyure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	size0(char *a)
{
	unsigned int	i;

	i = 0;
	while (a[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	src_length;
	unsigned int	dest_length;
	unsigned int	i;

	dest_length = size0(dest);
	src_length = size0(src);
	i = 0;
	if (size == 0 || size <= dest_length)
	{
		return (size + src_length);
	}
	while (src[i] != '\0' && (dest_length + i + 1) < size)
	{
		dest[dest_length + i] = src[i];
		i++;
	}
	dest[dest_length + i] = '\0';
	return (dest_length + src_length);
}
