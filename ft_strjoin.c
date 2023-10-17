/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarcasti <sarcasti@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 14:01:55 by sarcasti          #+#    #+#             */
/*   Updated: 2023/10/17 11:47:20 by sarcasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*mem;

	if (!s1 || !s2)
		return (0);
	mem = ft_calloc((ft_strlen(s1) + ft_strlen(s2) + 1), sizeof(char));
	i = 0;
	while (s1[i] != '\0')
	{
		mem[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		mem[i + j] = s2[j];
		j++;
	}
	mem[i + j] = '\0';
	return (mem);
}

int	main()
{
	char	s1[] = "hola";
	char	s2[] = "pelo";
	char	*result;

	result = ft_strjoin(s1, s2);
	printf("s1:%s\n s2:%s\n result:%s\n", s1, s2, result);
	return(0); 		
}