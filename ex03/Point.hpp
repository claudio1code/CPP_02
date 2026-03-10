/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clados-s <clados-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 10:54:49 by clados-s          #+#    #+#             */
/*   Updated: 2026/03/10 11:56:03 by clados-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point
{
	private:
		Fixed const y;
		Fixed const x;
		
	public:
		~Point();
		Point();
		Point(const Point& other);
		Point& operator=(const Point& other);
		
		Point(const int n);
		Point(const float n);
		Point(const float y, const float x);

		const Fixed&	getX(void) const;
		const Fixed&	getY(void) const;
};

#endif