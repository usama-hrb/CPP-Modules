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
		Fixed &operator= (const Fixed &obj);
		~Fixed();
		int getRawBits(void) const;
		void setRawBits(int const raw);
};