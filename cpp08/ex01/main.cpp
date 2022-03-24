#include "Span.hpp"

int main()
{
Span sp = Span(5);
sp.addNumber(6);
sp.addNumber(3);
sp.addNumber(17);
sp.addNumber(9);
sp.addNumber(11);
std::cout << sp.shortestSpan() << std::endl;
std::cout << sp.longestSpan() << std::endl;
Span span3(3);
std::vector<int>	vector2;

vector2.push_back(2);
vector2.push_back(3);
vector2.push_back(46);
span3.addNumbers(vector2.begin(), vector2.end());
return 0;
}