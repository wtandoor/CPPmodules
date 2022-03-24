#include "Fixed.h"

Fixed::Fixed(): _bitValue(0){
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int value){
    std::cout << "Int constructor called" << std::endl;
    this->_bitValue = value << _bit; //Сдвиг на восемь бит влево
}

int Fixed::toInt(void) const {
    return (this->_bitValue >> _bit);
}

Fixed::Fixed(const float value){
    std::cout << "Float constructor called" << std::endl;
    _bitValue = (int)(std::roundf(value * (float)(1 << Fixed::_bit)));
}

float Fixed::toFloat() const{
    float f = (float)(_bitValue) / (float)(1 << _bit);
    return (f);
}

Fixed::~Fixed(){
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &obj){
    std::cout << "Copy constructor called" << std::endl;
    *this = obj;
}

int Fixed::getRawBits(void) const{
    return (_bitValue);
}

int Fixed::getBit(void) const{
    return _bit;
}

void Fixed::setRawBits(int const raw){
    std::cout << "setRawBits method has been called" << std::endl;
    _bitValue = raw;
}

Fixed & Fixed::operator=(const Fixed &obj){
    std::cout << "Assignation operator called" << std::endl;
    _bitValue = obj.getRawBits();
    return (*this);
}

std::ostream &operator<< (std::ostream &out, const Fixed &fix){
    out << (float)(fix.getRawBits()) / (float)(1 << fix.getBit());
    return (out);
}