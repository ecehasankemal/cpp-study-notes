/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   extenced_functions.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hece <hece@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 02:01:32 by hece              #+#    #+#             */
/*   Updated: 2023/04/20 02:01:37 by hece             ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

static inline int
	extenced_square(int value = 1);
static inline double
	extenced_square(double value = 12.5);

int
	main(int ac, char *av[])
{
	(void)ac;
	(void)av;

	std::cout << extenced_square(7) << std::endl;
	std::cout << extenced_square(7.5) << std::endl;
	return (0);
}

static inline int
	extenced_square(int value)
{
	std::cout << "first value : " << value << std::endl;
	value = value * value;
	std::cout << "last value : ";
	return (value);
}

static inline double
	extenced_square(double value)
{
	std::cout << "first value : " << value << std::endl;
	value = value * value;
	std::cout << "last value : ";
	return (value);
}
