#include "Fixed.h"

Fixed::Fixed(): _bitValue(0){
}

Fixed::Fixed(const int value){
    this->_bitValue = value << _bit;
}

int Fixed::toInt(void) const {
    return (this->_bitValue >> _bit);
}

Fixed::Fixed(const float value){
    _bitValue = (int)(std::roundf(value * (float)(1 << Fixed::_bit)));
}

float Fixed::toFloat() const{
    float f = (float)(_bitValue) / (float)(1 << _bit);
    return (f);
}

Fixed::~Fixed(){
}

Fixed::Fixed(const Fixed &obj){
    *this = obj;
}

int Fixed::getRawBits(void) const{
    return (_bitValue);
}

int Fixed::getBit(void) const{
    return _bit;
}

void Fixed::setRawBits(int const raw){
    _bitValue = raw;
}

Fixed & Fixed::operator=(const Fixed &obj){
    _bitValue = obj.getRawBits();
    return (*this);
}

std::ostream &operator<<(std::ostream &out, const Fixed &fix){
    out << (float)(fix.getRawBits()) / (float)(1 << fix.getBit());
    return (out);
}

Fixed & Fixed::operator=(double const &floating){
    this->_bitValue = (int)(std::roundf(((double)floating * (double)(1<<Fixed::_bit))));
    return (*this);
}

Fixed & Fixed::operator=(int const &integer){
    this->_bitValue = integer << (Fixed::_bit);
    return (*this);
}

bool Fixed::operator!=(const Fixed & right){
    return (this->getRawBits() == right.getRawBits());
}

bool Fixed::operator==(const Fixed & right){
	return (this->getRawBits() == right.getRawBits());
}

bool Fixed::operator>(const Fixed & right){
	return (this->getRawBits() > right.getRawBits());
}

bool Fixed::operator<(const Fixed & right){
	return (this->getRawBits() < right.getRawBits());
}

bool Fixed::operator>=(const Fixed & right){
	return (this->getRawBits() >= right.getRawBits());
}

bool Fixed::operator<=(const Fixed & right){
	return (this->getRawBits() <= right.getRawBits());
}

Fixed Fixed::operator-(const Fixed & right){
    Fixed result;

    result.setRawBits(this->getRawBits() - right.getRawBits());
    return (result);
}

Fixed Fixed::operator+(const Fixed & right){
    Fixed result;

    result.setRawBits(right.getRawBits() + this->getRawBits());
    return result;
}

Fixed Fixed::operator*(const Fixed & right){
    Fixed result;
    long long buf;

    buf = (long)this->getRawBits() * (long)right.getRawBits();
    result.setRawBits(buf >> Fixed::_bit);
    return result;
}

Fixed Fixed::operator/(const Fixed & right){
    Fixed result;
    long long buf;

    buf = this->getRawBits();
    buf = buf << Fixed::_bit;
    buf /= right.getRawBits();
    result.setRawBits(buf);
    return result;
}

Fixed & Fixed::operator++(){
    this->_bitValue++;
    return (*this);
}

Fixed Fixed::operator++(int){
    Fixed temp(*this);
    this->_bitValue++;
    return (temp);
}

Fixed & Fixed::operator--(){
    this->_bitValue--;
    return (*this);
}

Fixed Fixed::operator--(int){
    Fixed temp(*this);
    this->_bitValue--;
    return (temp);
}

Fixed & Fixed::min(Fixed & first, Fixed & last){
    if (first.getRawBits() > last.getRawBits())
        return last;
    return first;
}

Fixed & Fixed::max(Fixed & first, Fixed & last){
    if (first.getRawBits() > last.getRawBits())
        return first;
    return last;
}

const Fixed & Fixed::min(const Fixed & first, const Fixed & last){
    if (first.getRawBits() > last.getRawBits())
        return last;
    return first;
}

const Fixed & Fixed::max(const Fixed & first, const Fixed & last){
    if (first.getRawBits() < last.getRawBits())
        return last;
    return first;
}


