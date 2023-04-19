#include <iostream>

double	number = 12.2;

int
	main(void)
{
	int	number;

	number = 5;
	std::cout << "Numberın global değeri : " << number << std::endl;
	std::cout << "Numberın fonsiyondaki değeri : " <<::number << std::endl;
	return (0);
}
