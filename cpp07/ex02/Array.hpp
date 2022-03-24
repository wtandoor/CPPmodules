#ifndef ARRAY_HPP
#define ARRAY_HPP

template <class T>
class Array{
    private:
        unsigned int length;
        T            *data;
    public:
        Array() : length(0), data(nullptr){};
        Array(unsigned int n) : length(n){
            data = new T[n];
        };
        Array(const Array & copy) : data(nullptr) {
            (*this) = copy;
        };
        Array & operator=(const Array & right){
            if (this->data)
                delete [] data;
            this->length = right.length;
            this->data = new T[this->length];
            for (unsigned int i = 0; i < this->length; ++i){
                this->data[i] = right.data[i];
            }
            return (*this);
        }
        ~Array(){
            delete [] data;
        };
        class InvalidIndex : public std::exception{
            public:
                InvalidIndex(){};
                virtual ~InvalidIndex() throw (){};
                virtual const char * what() const throw(){
                    return "invalid index of array";
                };
        };
        T& operator[] (unsigned int index){
            if (index >= length || index < 0){
                throw InvalidIndex();
            }
            return (this->data[index]);
        }

        unsigned int getLength();
};

template <typename T>
unsigned int Array<T>::getLength(){
    return this->length;
}

#endif