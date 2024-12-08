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
		float operator+ (const Fixed &obj) const;
		float operator- (const Fixed &obj) const;
		float operator/ (const Fixed &obj) const;
		float operator* (const Fixed &obj) const;
		//pre-en-dec
		Fixed &operator++();
		Fixed &operator--();
		//post-en-dec
		Fixed operator++(int);
		Fixed operator--(int);

		static Fixed &min(Fixed &a, Fixed &b);
		static Fixed min(const Fixed &a, const Fixed &b);
		static Fixed &max(Fixed &a, Fixed &b);
		static Fixed max(const Fixed &a, const Fixed &b);
};

std::ostream &operator<< (std::ostream &os, const Fixed &fixed);