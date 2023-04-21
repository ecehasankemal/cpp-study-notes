/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hece <hece@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 10:51:46 by hece              #+#    #+#             */
/*   Updated: 2023/04/21 10:51:47 by hece             ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>

int
	main(int ac, char const *av[], char const *env[])
{
	std::vector<std::string>	string;
	register int			iter;

	iter = 0;
	string.push_back("hasan");
	string.push_back("kemal");
	string.push_back("ece");
	string.push_back("silinecek");
	string.pop_back();
	while (iter < string.size())
	{
		std::cout << string[iter] << " ";
		iter++;
	}
	std::cout << std::endl;
	std::cout << "Vektörün boyutu " << string.size() << std::endl;
	string.clear();
	
	if (string.empty())
		std::cout << "Bu vektör boş " << std::endl;
	return (0);
}
