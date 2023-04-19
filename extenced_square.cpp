#include <iostream>

static inline int
	extenced_square(int value)
{
	std::cout << "value nin ilk değeri " << value << std::endl;
	value = value * value;
	std::cout << "valuenin son değeri ";
	return (value);
}

static inline double
	extenced_square(double value)
{
	std::cout << "value nin ilk değeri " << value << std::endl;
	value = value * value;
	std::cout << "value nin son değeri ";
	return (value);
}

int
	main(void)
{
	std::cout << extenced_square(7);
	std::cout << std::endl;
	std::cout << extenced_square(7.5);
	std::cout << std::endl;
	return (0);
}
