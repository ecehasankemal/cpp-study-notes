#include <iostream>

static inline int
	boxVolume(int lenght = 1, int width = 1, int height = 1);

int
	main(void)
{
	int	lenght;
	int	width;
	int	height;
	
	std::cout << "lenght değerini giriniz" << std::endl;
	std::cin >> lenght;
	std::cout << "boxVolume değeri " << boxVolume(lenght) << std::endl;
	std::cout << "width değerini giriniz" << std::endl;
	std::cin >> width;
	std::cout << "boxVolume değeri " << boxVolume(lenght, width) << std::endl;
	std::cout << "height değerini giriniz" << std::endl;
	std::cin >> height;
	std::cout << "boxVolume değeri " << boxVolume(lenght, width, height) << std::endl;
	return (0);
}

inline int
	boxVolume(int lenght, int width, int height)
{
	return (lenght * width * height);
}
