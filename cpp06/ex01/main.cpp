#include <iostream>

typedef struct {
    int x;
    float y;
    char z;
} Data;

uintptr_t serialize(Data* ptr){
    return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw){
    return (reinterpret_cast<Data *>(raw));
}

int main ()
{
    Data * a = new Data();
    Data * b;
    uintptr_t raw;

    a->x = 42;
    a->y = 42.42;
    a->z = '*';
    raw = serialize(a);

    std::cout << "adress data A: " << a << std::endl;
    std::cout << "A: x: " << a->x << "\t" << "y: "<< a->y << "\t" << "z: " << a->z << std::endl;
    std::cout << "raw: " << raw << std::endl;
    std::cout << "adress serialize A: " << &raw  << std::endl;
    b = deserialize(raw);
    std::cout << "adress deserialize raw: " << b  << std::endl;
    std::cout << "x: " << b->x  << "y: " << b->y << "z: " << b->z << std::endl;

    delete a;
    return (0);
}