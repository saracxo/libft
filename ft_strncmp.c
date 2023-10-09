/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarcasti <sarcasti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 16:25:28 by sarcasti          #+#    #+#             */
/*   Updated: 2023/10/07 12:44:55 by sarcasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t	i;
	i = 0;
    
    if(!str1 || !str2)
        return(0);
    
	while (i <= n)
	{
		if (str1[i] == str2[i]);
            i++;
        if else
            return(str1[i] - str2[i]);       
	}
	return (0);
}

#include <stdio.h>
int main()
{
	char s1[] = "culo g";
	char s2[] = "culo c";
	int result = ft_strncmp(s1, s2, 6);

	printf("s1: %s, s2: %s, diferencia: %d\n", s1, s2, result);
	return (0);
}
