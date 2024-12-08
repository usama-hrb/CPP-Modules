#include "Fixed.hpp"

const int Fixed::_bitsFact = 8;

Fixed::Fixed() : _fixedPointValue(0) {}

Fixed::Fixed(const Fixed &obj){
	*this = obj;
}

Fixed &Fixed::operator=(const Fixed &obj) {
	if (this != &obj)
		this->_fixedPointValue = obj._fixedPointValue;
	return (*this);
}

Fixed::Fixed(const int intConvert) : _fixedPointValue(intConvert << _bitsFact) {}

Fixed::Fixed(const float floatConvert) : _fixedPointValue(roundf(floatConvert * ( 1 << _bitsFact))) {}

Fixed::~Fixed() {}

int	Fixed::getRawBits(void) const {
	return (_fixedPointValue);
}

void	Fixed::setRawBits(int const raw) {
	_fixedPointValue = raw;
}

float	Fixed::toFloat(void) const {
	return static_cast<float>(_fixedPointValue) / (1 << _bitsFact);
}

int	Fixed::toInt(void) const {
	return _fixedPointValue >> _bitsFact;
}

std::ostream &operator<< (std::ostream &os, const Fixed &fixed) {
	os << fixed.toFloat();
	return os;
}

//comparison operators

bool Fixed::operator< (const Fixed &obj) {
	return (_fixedPointValue < obj._fixedPointValue);
}
bool Fixed::operator> (const Fixed &obj) {
	return (_fixedPointValue > obj._fixedPointValue);
}
bool Fixed::operator<= (const Fixed &obj) {
	return (_fixedPointValue <= obj._fixedPointValue);
}
bool Fixed::operator>= (const Fixed &obj) {
	return (_fixedPointValue >= obj._fixedPointValue);
}
bool Fixed::operator!= (const Fixed &obj) {
	return (_fixedPointValue != obj._fixedPointValue);
}

//arithmetic operator

float Fixed::operator+ (const Fixed &obj) const {
	return (this->toFloat() + obj.toFloat());
}

float Fixed::operator- (const Fixed &obj) const {

	return (this->toFloat() - obj.toFloat());
}

float Fixed::operator/ (const Fixed &obj) const {
	return (this->toFloat() / obj.toFloat());
}

float Fixed::operator* (const Fixed &obj) const {
	return (this->toFloat() * obj.toFloat());
}

//pre and post increment decrement
Fixed &Fixed::operator++() {
	_fixedPointValue += 1;
	return (*this);
}

Fixed &Fixed::operator--() {
	_fixedPointValue -= 1;
	return (*this);
}

Fixed Fixed::operator++(int) {
	Fixed r(*this);
	_fixedPointValue += 1;
	return (r);
}

Fixed Fixed::operator--(int) {
	Fixed r(*this);
	_fixedPointValue -= 1;
	return (r);
}

Fixed &Fixed::min(Fixed &a, Fixed &b) {
	return (a._fixedPointValue < b._fixedPointValue ? a : b);
}

Fixed Fixed::min(const Fixed &a, const Fixed &b) {
	return (a._fixedPointValue < b._fixedPointValue ? a : b);
}

Fixed &Fixed::max(Fixed &a, Fixed &b) {
	return (a._fixedPointValue > b._fixedPointValue ? a : b);
}

Fixed Fixed::max(const Fixed &a, const Fixed &b) {
	return (a._fixedPointValue > b._fixedPointValue ? a : b);
}
