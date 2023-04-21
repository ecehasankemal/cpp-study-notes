/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector3.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hece <hece@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 12:53:58 by hece              #+#    #+#             */
/*   Updated: 2023/04/21 13:09:59 by hece             ###   ########.tr       */
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
	if ((str[index] >= '0' && str[index] <= '9') && str[index] != '\0')
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

	array.push_back(5);
	array.push_back(10);
	array.push_back(31);
	(void)env;
	array.pop_back();
	for(int i = 0; i < array.size(); i++)
		std::cout << array[i] << " ";
	if (ac == 2)
		if (ft_atoi(const_cast<char *>(av[1])) == 5)
			array.clear();
	if (array.empty())
		std::cout << std::endl << "Bu array vektörü boş(empty)";
	std::cout << std::endl;
	return (0);
}
