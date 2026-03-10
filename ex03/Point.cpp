/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clados-s <clados-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 11:05:55 by clados-s          #+#    #+#             */
/*   Updated: 2026/03/10 11:47:20 by clados-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::~Point(){
}

Point::Point() : y(0), x(0) {}

Point::Point(const Point& other){
	*this = other;
}

Point& Point::operator=(const Point& other) {
	(void)other;
	return *this;
}

