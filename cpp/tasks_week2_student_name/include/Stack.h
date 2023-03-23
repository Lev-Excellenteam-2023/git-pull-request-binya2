#pragma once
#include"Vector.h"
class Stack {
	Vector vector;
public:
	explicit Stack(size_t size = 0, int value = 0) :vector(size, value) {}
	Stack(const Stack& other);

	void push(int val);
	int pop();

	[[nodiscard]] bool isEmpty()const;
	[[nodiscard]] bool isFull()const;

	bool operator==(const Stack& other) const;
	bool operator!=(const Stack& other) const;
	bool operator<(const Stack& other) const;
	bool operator>(const Stack& other) const;
	const Stack& operator=(const Stack& other);

	Stack operator+(const Stack& other)const;
	const Stack& operator+=(const Stack& other);

	const Stack& operator+=(int val);
	const Stack& operator-=(int val);
	const Stack& operator*=(int val);
	const Stack& operator/=(int val);
	void print();

};
