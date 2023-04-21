/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector2.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hece <hece@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 10:59:49 by hece              #+#    #+#             */
/*   Updated: 2023/04/21 11:29:57 by hece             ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>

static inline void
	ft_collect_vector(int ac, char *av[], std::vector<std::string>& string)
{
	register int	iter;

	iter = 1;
	while (iter < ac)
		string.push_back(av[iter++]);
	string.pop_back();
}

int
	main(int ac, char const *av[], char const *env[])
{
	std::vector<std::string>	string;
	register int				index;

	(void)env;
	index = 0;
	ft_collect_vector(ac, const_cast<char **>(av), string);
	while (index < string.size())
		std::cout << string[index++] << " ";
	std::cout << std::endl;
	string.clear();
	if (string.empty())
		std::cout << "Bu vektör boş!!!! " << std::endl;
	return (0);
}
