/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector4_c_version.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hece <hece@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 14:43:01 by hece              #+#    #+#             */
/*   Updated: 2023/04/21 14:43:13 by hece             ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

static inline int
	ft_atoi(const char *str)
{
	register int	index;
	register int	result;
	register int	sign;

	index = 0;
	sign = 1;
	result = 0;
	while ((str[index] >= 9 && str[index] <= 13) || str[index] == ' ')
		index++;
	if (str[index] == '+' || str[index] == '-')
	{
		if (str[index] == '-')
			sign *= -1;
		index++;
	}
	while ((str[index] >= '0' && str[index] <= '9') && str[index] != '\0')
	{
		result = ((str[index] - '0') + (result * 10));
		index++;
	}
	return (result * sign);
}

static inline int
	*ft_collect(char *str)
{
	int	*result;

	*result = ft_atoi(str);
	return (result);
}

static inline size_t
	ft_strlen(const char *str)
{
	size_t	index;

	index = 0;
	while (index[str])
		index++;
	return (index);
}

static inline void
	ft_putstr(char *str)
{
	write(1, str, ft_strlen(str));
}

int
	main(int ac, char const *av[], char const *env[])
{
	register int	index;
	register int	layer;
	int		**vector;

	layer = 0;
	index = 1;
	(void)env;
	vector = (int **)malloc(sizeof(int *) * (ac - 1));
	if (ac > 1)
	{
		while (av[index])
		{
			vector[layer] = ft_collect((char *)av[index]);
			layer++;
			index++;
		}
		if (ac - 1 == 4)
			ft_putstr("AFERİN!!!!\n");
	}
	ft_putstr("Program Sonlandırıldı....\n");
	return (0);
}
