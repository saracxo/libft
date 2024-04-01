/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarcasti <sarcasti@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 14:01:55 by sarcasti          #+#    #+#             */
/*   Updated: 2023/11/30 12:50:53 by sarcasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		s1_size;
	int		size;
	char	*join;

	s1_size = ft_strlen(s1);
	size = s1_size + ft_strlen(s2);
	join = ft_calloc((size + 1), sizeof(char));
	if (!join)
		return (NULL);
	ft_strlcat(join, s1, s1_size + 1);
	ft_strlcat(join, s2, size + 1);
	return (join);
}
