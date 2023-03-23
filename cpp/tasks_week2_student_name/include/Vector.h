#pragma once
#include <iostream>
using namespace std;
class Vector
{
    int* _elements;
    size_t _capacity; //Total memory allocated
    size_t _size; //Size of vector to access
    int _value{};
public:

    explicit Vector(size_t size = 0, int value = 0);//constructor
    Vector(const Vector& other);//copy constructor
    Vector(Vector&& other) noexcept; // move constructo
    ~Vector();

    [[nodiscard]] int size() const;//return size of vector
    [[nodiscard]] int capacity() const;//return capacity of vector
    [[nodiscard]] bool empty() const; //returns true if size = 0
    void push_back(const int val);//adds element at the end of the vector
    int pop_back();//removes and returns the last element of the vector
    void resize(int n);//change _size to n, unless n is greater than the vector's capacity
    void resize(int n, const int& val);//same as above, if new elements added their value is val
    void clear();
    void insert(size_t index, const int& val);
    void erase(size_t index);
    [[maybe_unused]] void swap(Vector& v);
    [[nodiscard]] int* data() const;
    void print();
    int operator<=>(const Vector& other)const;
    Vector& operator=(const Vector& other); //assignment operator
    Vector& operator=(Vector&& other) noexcept;//move assignment operator
    int& operator[](int n) const;
    bool operator==(const Vector&) const;
};