/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarcasti <sarcasti@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 12:04:34 by sarcasti          #+#    #+#             */
/*   Updated: 2023/10/23 10:48:13 by sarcasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	start(const char *str, const char *mem)
{
	int	i;
	int	j;

	i = 0;
	while (str[i] != "\0")
	{
		j = 0;
		while (str[i] != "\0" && mem[j] != "\0")
		{
			if (str[i] == mem[j])
				return (i);
		}
		j++;
	}
	i++;
}


#include <stdio.h>

int	main(void)
{
	printf("Resultado: %d\n", ft_pene("cbaHolacb", "abc") - 1);
	return (0);
}
