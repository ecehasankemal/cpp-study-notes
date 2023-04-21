/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector4.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hece <hece@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 13:35:28 by hece              #+#    #+#             */
/*   Updated: 2023/04/21 13:43:40 by hece             ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>

static inline int
	ft_atoi(const char *str)
{
	register int	result;
	register int	sign;
	register int	index;

	index = 0;
	result = 0;
	sign = 1;
	while ((str[index] >= 9 && str[index] <= 13) || (str[index] == ' '))
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

int
	main(int ac, char const *av[], char const *env[])
{
	std::vector<int>	array;
	register int		index;

	index = 1;
	if (ac > 1)
	{
		while (av[index])
			array.push_back(ft_atoi(const_cast<char *>(av[index++])));
		if (array.size() == 4)
			std::cout << "AFERİN!!!! " << std::endl;
	}
	std::cout << "Program kapandı" << std::endl;
	return (0);
}
