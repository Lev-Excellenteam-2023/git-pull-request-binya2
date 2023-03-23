#include "Vector.h"


Vector::Vector(const Vector& other)
{
    this->_size = other.size();
    this->_capacity = other.capacity();
    this->_elements = new int[other.capacity()];
    for (int i = 0; i < _size; i++)
        this->_elements[i] = other._elements[i];
}

Vector::Vector(size_t size, int value)
{
    _size = size;
    _value = value;
    _capacity = size*2;
    _elements = new int[_capacity];
    for (int i = 0; i < _size; i++)
        _elements[i] = value;
}

Vector :: ~Vector()
{
    delete[]_elements;
    this->_elements = nullptr;
    this->_size = 0;
    this->_capacity = 0;
}

int Vector::size() const
{
    return _size;
}

int Vector::capacity() const
{
    return _capacity;
}

bool Vector::empty() const
{
    return this->_size == 0;
}

void Vector::push_back(const int val)
{
    double multi=2;
    if (_capacity > 128)
        multi = 1.5;

    if (this->_size == this->_capacity) {
        if (_capacity == 0) {
            _elements = new int(1);
            _capacity = 1;
        }
        else
        {
            _capacity = _capacity * multi;
            int* item = new int[_capacity];
            for (int i = 0; i < size(); ++i)
                item[i] = _elements[i];
            delete[]_elements;
            _elements = item;
            item = nullptr;
        }
    }
    this->_elements[this->_size++] = val;
}

int Vector::pop_back()
{
    if (_size > 0)
    {
        this->_size--;
        return _elements[_size];
    }
    else
    {
        std::cerr << "error: pop from empty vector" << std::endl;
        return 0;
    }
}

void Vector::resize(const int count)
{
    this->resize(count, 0);
}

void Vector::resize(const int count, const int& val)
{
    if (count > _size)
    {
        for (int i = _size-1; i < count; ++i)
            this->push_back(val);
    }
    _size = count;
}

void Vector::clear()
{
    _size = 0;
}

void Vector::insert(const size_t index, const int& val)
{
    this->push_back(this->_elements[_size - 1]);
    for (int i = _size - 2; i > index ; i--)
        std::swap(_elements[i], _elements[i - 1]);
    _elements[index - 1] = val;
}

void Vector::erase(const size_t index)
{
    if (index < size()){
        for (int i = index-1; i < _size-1; i++)
            std::swap(_elements[i], _elements[i + 1]);
        this->pop_back();
    }
}

int& Vector :: operator[](int n) const
{
    if (n >= this->_size || n < 0){
        std::cerr << "ERROR - index out of range" << std::endl;
        n = 0;
    }
    return this->_elements[n];
}

int* Vector::data() const
{
    return _elements;
}

void Vector::print()
{
    for (int i = 0; i < (*this).size(); i++)
        std::cout << (*this)[i] << " ";
    std::cout << "\n";
}

int Vector::operator<=>(const Vector& other) const
{
    int min = other._size;
    if (this->_size < other._size)
        min = _size;
    for (int i = 0; i < min; i++) {
        if (this->_elements[i] > other._elements[i]) 
            return 1;
        if (this->_elements[i] < other._elements[i])
            return -1;
    }
    if (this->_size > other._size)
        return  1;
    if (_size < other._size)
        return  -1;
    return 0;
}

[[maybe_unused]] void Vector::swap(Vector& v)
{
    Vector temp = v;
    v = *this;
    *this = temp;
}

Vector& Vector :: operator=(const Vector& other)
{
    if (this != &other)
        delete[] _elements;
    this->_capacity = other._capacity;
    this->_size = 0;
    _value = other._value;
    this->_elements = new int[this->_capacity];
    for (int i = 0; i < other._size; i++)
        this->push_back(other._elements[i]);
    return *this;
}

Vector::Vector(Vector&& other)noexcept
{
    this->_size = other.size();
    this->_capacity = other.capacity();
    this->_elements = nullptr;
    this->_elements = other._elements;
    other._elements = nullptr;
}

Vector& Vector::operator=(Vector&& other)
 noexcept {
    if (this != &other)
        delete[] this->_elements;
    this->_capacity = other._capacity;
    this->_size = other._size;
    this->_elements = other._elements;
    other._elements = nullptr;
    return *this;
}

bool Vector::operator==(const Vector& v) const
{
    if (_size != v._size)
        return false;
    if ((*this <=> v) == 0)
        return true;
    return false;
}




