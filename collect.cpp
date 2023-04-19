#include <iostream>

int
	main(void)
{
	int				value;
	int				value2;
	register int	sum;

	std::cout << "Birinci sayıyı giriniz." << std::endl;
	std::cin >> value;
	std::cout << "İkinci sayıyı giriniz." << std::endl;
	std::cin >> value2;
	sum = value + value2;
	std::cout << "Sum değeriniz " << sum << " dur." << std::endl;
	return (0);
}
