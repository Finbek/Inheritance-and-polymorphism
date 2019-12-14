#ifndef MY_CONTAINER_HPP
#define MY_CONTAINER_HPP

template<class T>
class my_container
{
public:
    // Adds a new element
    virtual void add(const T& __x) = 0;

    // Removes the last element in the vector,
    // effectively reducing the container size by one.
    virtual void pop_back() = 0;

    // Removes all elements from the vector (which are destroyed),
    // leaving the container with a size of 0.
    virtual void clear() = 0;

    virtual void swap(my_container<T>& c) = 0;

    // Returns the number of elements in the vector.
    virtual unsigned int size() const = 0;

    virtual const T& operator [](const unsigned int __pos) const = 0;

    // Returns the pointer to the first element of my_container.
    virtual T* begin() const = 0;

    virtual ~my_container() {};
};
#endif
