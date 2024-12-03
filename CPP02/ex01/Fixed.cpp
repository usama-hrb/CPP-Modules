#include "Fixed.hpp"

const int Fixed::_bitsFact = 8;

Fixed::Fixed() : _fixedPointValue(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &obj){
	std::cout << "Copy constructor called" << std::endl;
	*this = obj;
}

Fixed &Fixed::operator=(const Fixed &obj) {
	if (this != &obj)
	{
		std::cout << "Copy assignment operator called" << std::endl;
		this->_fixedPointValue = obj._fixedPointValue;
	}
	return (*this);
}

Fixed::Fixed(const int intConvert) : _fixedPointValue(intConvert << _bitsFact) {
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float floatConvert) : _fixedPointValue(roundf(floatConvert * ( 1 << _bitsFact))) {
	std::cout << "Float constructor called" << std::endl;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

int	Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" <<std::endl;
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