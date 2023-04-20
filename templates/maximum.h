#ifndef MAXIMUM_H
# define MAXIMUM_H

template <typename T>
T maximum(T value1, T value2, T value3)
{
	T	maxValue;

	maxValue = value1;
	if (maxValue < value2)
			maxValue = value2;
	if (maxValue < value3)
			maxValue = value3;
	return (maxValue);
}

#endif
