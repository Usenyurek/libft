/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: usenyure <usenyure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 16:00:45 by usenyure          #+#    #+#             */
/*   Updated: 2025/06/03 16:00:51 by usenyure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	total_char(char **strs, int size, char *sep)
{
	int	tot;
	int	i;

	i = 0;
	tot = 0;
	while (i < size)
	{
		tot += ft_strlen(strs[i]);
		if (i < size - 1)
		{
			tot += ft_strlen(sep);
		}
		i++;
	}
	return (tot + 1);
}

char	*mkstr(char *dest, char **strs, char *sep, int size)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	k = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
			dest[k++] = strs[i][j++];
		if (i < size - 1)
		{
			j = 0;
			while (sep[j] != '\0')
				dest[k++] = sep[j++];
		}
		i++;
	}
	dest[k] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*dest;

	if (size == 0)
		return ((char *) malloc (1));
	dest = malloc(total_char(strs, size, sep));
	if (dest == NULL)
		return (NULL);
	dest = mkstr(dest, strs, sep, size);
	return (dest);
}
