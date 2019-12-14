#include "my_container.hpp"

#ifndef MY_VECTOR_HPP
#define MY_VECTOR_HPP

template<class T>
class my_vector : public my_container<T>
{
public:
    // default constructor
    my_vector();
    my_vector(const my_vector<T> &var);
    virtual void add(const T&__x);
    unsigned int size() const;
    void pop_back();
    void clear();
    void swap(my_container<T>& var);
    const T& operator[](const unsigned int pos)const;
    T* begin() const;

    int len = 1;
    int siz = 0;
    T* vect = new T [len];

   };

#include "my_vector.tcc"

#endif
