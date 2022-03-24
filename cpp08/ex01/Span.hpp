#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>

class Span{
    private:
        unsigned int size;
        unsigned int count;
        std::vector<int> data;
        Span();
    public:
        Span(unsigned int size);
        ~Span();
        Span(const Span & copy);
        Span & operator= (const Span & right);

        int & operator[] (unsigned int index);

        void addNumber(unsigned int num);
        void addNumbers(std::vector<int>::iterator start, std::vector<int>::iterator end);
        unsigned int shortestSpan();
        unsigned int longestSpan();

        class SpanExce : public std::exception{
            private:
                std::string ret;
            public:
                SpanExce(std::string ret) : ret(ret){};
                virtual ~SpanExce() throw(){};
                virtual const char * what() const throw(){
                    return (ret.c_str());
                };
        };
};

#endif