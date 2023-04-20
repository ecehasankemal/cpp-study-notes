/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maximum.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hece <hece@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 15:07:17 by hece              #+#    #+#             */
/*   Updated: 2023/04/20 15:07:21 by hece             ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "maximum.h"

static inline void
	int_example(void)
{
		int	a;
		int	b;
		int	c;

		std::cout << "Sırayla int için 3 değer giriniz" << std::endl;
		std::cin >> a >> b >> c;
		std::cout << "Maximum int değeri " << maximum(a, b, c) << std::endl;
}

static inline void
	double_example(void)
{
		double	a;
		double	b;
		double	c;

		std::cout << "Sırayla double için 3 değer giriniz" << std::endl;
		std::cin >> a >> b >> c;
		std::cout << "Maximum double değeri " << maximum(a, b, c) << std::endl;
}

int
	main(int ac, char const *av[])
{
		(void)ac;
		(void)av;
		int_example();
		double_example();
		return (0);
}
