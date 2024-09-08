#include "smart_array.h"

void smart_array::Resize(size_t new_size) {
    int* new_array = new int[new_size];
    std::move(_array, _array + _count, new_array);
    delete[] _array;
    _array = new_array;
    _size = new_size;
}

smart_array::smart_array() : _size(10), _count(0) {
    _array = new int[_size];
};

smart_array::smart_array(size_t size) : _size(size), _count(0) {
    _array = new int[_size];
};

void smart_array::Append(const int& elem) {
    if (_count == _size) {
        Resize(_size * 2);
    }
    _array[_count++] = elem;
};

bool smart_array::FindElem(const size_t& elem) const {
    return std::find(_array, _array + _count, elem) != (_array + _count);
};

int smart_array::GetMax() const {
    if (_count == 0) throw std::runtime_error("Array is empty");
    return *std::max_element(_array, _array + _count);
};

int smart_array::GetMin() const {
    if (_count == 0) throw std::runtime_error("Array is empty");
    return *std::min_element(_array, _array + _count);
};

smart_array::~smart_array() {
    delete[] _array;
};
