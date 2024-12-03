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
};

std::ostream &operator<< (std::ostream &os, const Fixed &fixed);