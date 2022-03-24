#ifndef EASYFIND_H
#define EASYFIND_H

#include <iostream>
#include <algorithm>

template <typename T>
typename T::iterator easyfind(T & vec, int n){
    return (std::find(vec.begin(), vec.end(), n));
}

#endif