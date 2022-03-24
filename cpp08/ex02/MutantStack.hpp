#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>
#include <iostream>

template<class T>
class MutantStack : public std::stack<T>{
    public:
        typedef typename std::stack<T>::container_type::iterator iterator;
        typedef typename std::stack<T>::container_type::const_iterator const_iterator;
        typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
        typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;

        MutantStack():std::stack<T>(){};
        ~MutantStack(){};
        MutantStack(const MutantStack & copy) : std::stack<T>(copy){};
        MutantStack &operator=(const MutantStack &right){
            if (this != right)
                std::stack<T>::operator=(right);
            return (*this);
        };
        
        const_reverse_iterator rbegin() const{
            return std::stack<T>::c.rbegin();
        };
        
        const_reverse_iterator rend() const{
            return std::stack<T>::c.rend();
        };
        
        const_iterator begin() const {
            return std::stack<T>::c.begin();
        };

        const_iterator end() const{
            return std::stack<T>::c.end();
        };

        iterator begin(){
            return std::stack<T>::c.begin();
        };

        iterator end(){
            return std::stack<T>::c.end();
        };

        reverse_iterator rbegin(){
            return std::stack<T>::c.rbegin();
        };

        reverse_iterator rend(){
            return std::stack<T>::c.rend();
        };
};

#endif
