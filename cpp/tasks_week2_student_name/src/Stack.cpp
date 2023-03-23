#include"Stack.h"



void Stack::push(int val)
{
    vector.push_back(val);
}

int Stack::pop()
{
    return vector.pop_back();
}

bool Stack::isEmpty() const
{
    return vector.empty();
}

bool Stack::isFull() const
{
    return vector.size() == vector.capacity();
}

bool Stack::operator<(const Stack& other) const
{
    return this->vector.size() < other.vector.size();;
}

bool Stack::operator>(const Stack& other) const
{
    return this->vector.size() > other.vector.size();
}

const Stack& Stack::operator=(const Stack& other)
{
    vector = other.vector;
    return *this;
}

Stack Stack::operator+(const Stack& other) const
{
    Stack item(*this);
    int* data_s = other.vector.data();
    for (int i = 0; i < other.vector.size(); i++)
        item.push(data_s[i]);
    return item;
}

const Stack& Stack::operator+=(const Stack& other)
{
    for (int i = 0; i < other.vector.size(); i++)
        this->push(other.vector[i]);
    return *this;
}

const Stack& Stack::operator+=(int val)
{
    int* data = vector.data();
    for (int i = 0; i < vector.size(); i++)
        data[i] += val;
    return *this;
}


const Stack& Stack::operator*=(int val)
{
    int* data = vector.data();
    for (int i = 0; i < vector.size(); i++)
        data[i] *= val;
    return *this;
}

const Stack& Stack::operator/=(int val)
{
    int* data = vector.data();
    for (int i = 0; i < vector.size(); i++)
        data[i] /= val;
    return *this;
}

const Stack& Stack::operator-=(int val)
{
    int* data = vector.data();
    for (int i = 0; i < vector.size(); i++)
        data[i] -= val;
    return *this;
}

void Stack::print() {
    vector.print();
}

Stack::Stack(const Stack& other) :vector(other.vector) {}

bool Stack::operator==(const Stack& other) const {
    return other.vector == vector;
}

bool Stack::operator!=(const Stack& other) const {
    return !(vector == other.vector);
}


