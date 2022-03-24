#include <iostream>
#include <ctime>

class Base{
    public:
        virtual ~Base(){};
};

class A : public Base{

};

class B : public Base{

};

class C : public Base{

};

Base * generate(void){
    std::srand(std::time(0));
    int random = std::rand();

    if (random % 3 == 2){
        return (new A);
    } else if (random % 3 == 1){
        return (new C);
    } else {
        return (new B);
    }
}

void identify(Base* p){
    if (dynamic_cast<A *> (p)){
        std::cout << "this is class A" << std::endl;
    } else if (dynamic_cast<C *> (p)){
        std::cout << "this is class C" << std::endl;
    } else if (dynamic_cast<B * >(p)){
        std::cout << "this is class B" << std::endl;
    } else {
        std::cout << "Error" << std::endl;
    }
}

void identify(Base& p){
    try{
        A a =dynamic_cast<A &>(p);
        std::cout << "this is class A" << std::endl;
    } catch (std::exception & ex){

    }
    try {
        B b = dynamic_cast<B &>(p);
        std::cout << "This is class B" << std::endl;
    } catch (std::exception & ex){

    }
    try {
        C c = dynamic_cast<C &>(p);
        std::cout << "This is class C" << std::endl;
    } catch (std::exception & ex){

    }
}

int main(){
    Base *a;

    std::cout << "ptr *p" << std::endl;
    a = generate();
    identify(a);
    delete(a);

    std::cout << "ref &p" << std::endl;

    Base &b = *(generate());
    identify(b);
    delete &b;
    return (0);
}