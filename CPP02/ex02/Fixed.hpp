#pragma once

#include <iostream>

class Fixed
{
	private:
		int					_fixedPointValue;
		static const int	_bitsFact;
	public:
		Fixed();
		Fixed(const Fixed &obj);
		Fixed(const int intConvert);
		Fixed(const float floatConvert);
		Fixed &operator= (const Fixed &obj);
		~Fixed();
		int getRawBits(void) const;
		void setRawBits(int const raw);
		float toFloat(void) const;
		int toInt(void) const;
		//comparison op
		bool operator> (const Fixed &obj);
		bool operator< (const Fixed &obj);
		bool operator>= (const Fixed &obj);
		bool operator<= (const Fixed &obj);
		bool operator!= (const Fixed &obj);
		//arithmetic op
		Fixed &operator+ (const Fixed &obj);
		Fixed &operator- (const Fixed &obj);
		Fixed &operator/ (const Fixed &obj);
		Fixed &operator* (const Fixed &obj);
		//pre-en-dec
		Fixed &operator++();
		Fixed &operator--();
		//post-en-dec
		Fixed &operator++(int);
		Fixed &operator--(int);
};

std::ostream &operator<< (std::ostream &os, const Fixed &fixed);