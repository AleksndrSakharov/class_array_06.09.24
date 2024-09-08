#pragma once
#include <iostream>
#include <algorithm>
#include <stdexcept>

class smart_array
{
private:
    int* _array;
    size_t _size;
    size_t _count;


    void Resize(size_t new_size);

public:
    smart_array();

    smart_array(size_t size);

    void Append(const int& elem);

    bool FindElem(const size_t& elem) const;

    int GetMax() const;

    int GetMin() const;

    ~smart_array();
};
