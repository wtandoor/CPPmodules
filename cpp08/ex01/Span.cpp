#include "Span.hpp"

Span::Span(unsigned int size) : size(size), count(0){

}

Span::~Span(){

}

Span::Span(const Span & copy){
    (*this) = copy;
}

Span & Span::operator=(const Span & right){
    this->count = right.count;
    this->data = right.data;
    this->size = right.size;
    return (*this);
}

void Span::addNumber(unsigned int num){
    if (data.size() >= this->size)
        throw SpanExce("array is full, u can't put elements anymore");
    this->count++;
    data.push_back(num);
}

void Span::addNumbers(std::vector<int>::iterator start, std::vector<int>::iterator end){
    std::vector<int> tmp(start, end);

    std::cout << "addNumbers method has been called" << std::endl;
    if (tmp.size() > this->size - this->count){
        throw SpanExce("u can't put your vector in Span, because his size is not fit");
    } else{
        std::vector<int>::iterator start1;
        for (start1 = start; start1 != end; start1++){
            this->data.push_back(*start1);
            std::cout << "number: " << *start1 << " has been push in our Span" << std::endl;
            std::cout << this->data[count] << std::endl;
            this->count++;
        }
    }
}

int & Span::operator[] (unsigned int index){
    if (index >= size || index < 0){
        throw SpanExce("index out of range, check if the data is correct");
    }
    return this->data[index];
}


unsigned int Span::shortestSpan(){
    if (data.size() == 0 || data.size() == 1){
        throw SpanExce("u can't use method shortestSpan w/0 2 or more elements in array");
    }
    std::vector<int>::iterator start = data.begin();
    std::vector<int>::iterator end;
    unsigned int res = abs(*start - *(start + 1));
    for (start = data.begin(); start != data.end(); start++){
        for (end = start + 1; end != data.end(); ++end){
            unsigned int localMin = abs(*end - *start);
            if (localMin < res)
                res = localMin;
        }
    }
    return (res);
}

unsigned int Span::longestSpan(){
    if (data.size() == 0 || data.size() == 1){
        throw SpanExce("u can't use method longestSpan w/0 2 or more elements in array");
    }
    std::vector<int>::iterator start;
    start = std::min_element(data.begin(), data.end());
    std::vector<int>::iterator end;
    end = std::max_element(data.begin(), data.end());
    return (*end - *start); 
}