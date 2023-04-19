#include <iostream>

static inline int
	ft_square(const int value)
{
	return (value * value);
}

int
	main(void)
{
	int	value;

	std::cout << "Lütfen square sini merak ettiğiniz sayıyı giriniz" << std::endl;
	std::cin >> value;
	value = ft_square(value);
	std::cout << "girdiğiniz sayının squaresi " << value << " dir." << std::endl;
	return (0);
}
