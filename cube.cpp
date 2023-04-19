#include <iostream>

static inline double
	cube(const double value)
{
	return (value * value * value);
}

int
	main(void)
{
	register int	loopVeriable;
	double		value;

	loopVeriable = 0;
	while (loopVeriable < 3)
	{
		std::cout << "Lütfen cube sini merak ettiğiniz sayıyı giriniz" << std::endl;
		std::cin >> value;
		std::cout << "Değeri " << value << " olan değişkenin cubesi ";
		value = cube(value);
		std::cout << value << " dir." << std::endl;
		loopVeriable++;
	}
	return (0);
}
