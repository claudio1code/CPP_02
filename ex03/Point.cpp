	/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clados-s <clados-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 11:05:55 by clados-s          #+#    #+#             */
/*   Updated: 2026/03/10 14:04:30 by clados-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::~Point(){}

Point::Point() : y(0), x(0) {}

Point::Point(const float y, const float x) : x(x), y(y) {}

Point::Point(const Point& other) : x(other.getX()), y(other.getY()) {}

Point& Point::operator=(const Point& other) {
	(void)other;
	return *this;
}

const Fixed&	Point::getX() const{
	return this->x;
}

const Fixed&	Point::getY() const{
	return this->y;
}
