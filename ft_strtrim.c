/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarcasti <sarcasti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 12:04:34 by sarcasti          #+#    #+#             */
/*   Updated: 2023/10/19 21:02:23 by sarcasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isset(int c, char const *set)
{
	while (*set)
	{
		if (c == *set++)
			return (1);
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*str_trim;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && ft_isset(s1[start], set))
		start++;
	end = strlen(s1);
	while (end > start && ft_isset(s1[end - 1], set))
		end--;
	str_trim = malloc(sizeof(char) * (end - start + 1));
	if (!str_trim)
		return (NULL);
	str_trim = strncpy(str_trim, &s1[start], end - start);
	str_trim[end - start] = '\0';
	return (str_trim);
}

int	main(void)
{
	char const	*s1;
	char const	*set;
	char		*result;

	s1 = "   Hola Mundo!   ";
	set = "mun";
	result = ft_strtrim(s1, set);
	if (result != NULL)
	{
		printf("%s\n", result);
		free(result);
	}
	return (0);
}
