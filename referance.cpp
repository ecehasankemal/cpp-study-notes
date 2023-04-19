#include <iostream>

int
	main(void)
{
	int	x;
	int	&y = x;

	x = 2;
	std::cout << "x in değeri ile y nin değeri aynıdır..." << std::endl;
	std::cout << "x in değeri : " << x << std::endl;
	std::cout << "y nin değeri : " << y << std::endl;
	return (0);
}
