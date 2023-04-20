/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maximum.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hece <hece@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 15:07:31 by hece              #+#    #+#             */
/*   Updated: 2023/04/20 15:07:32 by hece             ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

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
