#include <algorithm>

#ifndef SORTABLE_HPP
#define SORTABLE_HPP

template<class T>
class sortable
{
protected:
    void sort(T* first, T* last) {
        std::sort(first, last);
    }
};

#endif
