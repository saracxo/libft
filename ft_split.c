/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarcasti <sarcasti@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 10:18:54 by sarcasti          #+#    #+#             */
/*   Updated: 2024/04/05 10:44:15 by sarcasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_seplen(char const *str, char sep, int i)
{
	int	len;

	len = 0;
	while (str[i] != sep && str[i])
	{
		len++;
		i++;
	}
	return (len);
}

static int	count_words(char const *str, char sep)
{
	int	counter;
	int	i;

	counter = 0;
	i = 0;
	if (!str[0])
		return (0);
	if (str[0] != sep)
		counter++;
	while (str[i + 1])
	{
		if (str[i] == sep && str[i + 1] != sep)
			counter++;
		i++;
	}
	return (counter);
}

static char	*fill_arr(char const *str, int j, int len)
{
	char	*out;
	int		i;

	out = (char *)malloc((len + 1) * sizeof(char));
	if (!out)
		return (0);
	i = 0;
	while (i < len)
	{
		out[i] = str[j];
		i++;
		j++;
	}
	out[i] = 0;
	return (out);
}

static void	free_arr(char *arr[])
{
	int	i;

	i = 0;
	while (arr[i])
	{
		free(arr[i]);
		i++;
	}
	free(arr);
}

char	**ft_split(char const *s, char c)
{
	int		arr_len;
	char	**arr;
	int		i;
	int		j;

	arr_len = count_words(s, c);
	arr = (char **)ft_calloc((arr_len + 1), sizeof(char *));
	if (!arr)
		return (0);
	i = 0;
	j = 0;
	while (i < arr_len)
	{
		while (s[j] == c)
			j++;
		arr[i] = fill_arr(s, j, ft_seplen(s, c, j));
		if (!arr[i])
			return (free_arr(arr), NULL);
		j += ft_seplen(s, c, j);
		i++;
	}
	return (arr);
}

/*int main()
{
	char *str = "hola barbara";
	char c = 'b';
	char **result = ft_split(str, c);
	int i = 0;
	while (result[i] !='\0')
	{
		printf("%s\n", result[i]);
		i++;
	}
	
	return 0;	
}*/