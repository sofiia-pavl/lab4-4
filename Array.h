#pragma once
#include <iostream>
#include <Windows.h>
#include <cmath>
#include <fcntl.h>

using namespace std;

class Array
{
	int size;
	double* arr;
public:
	Array(int n = 0)
		: size(n)
	{
		arr = new double[size];
		for (int i = 0; i < size; i++)
			arr[i] = 0;
	}
	~Array()
	{
		delete[] arr;
	}

	int GetSize() const { return size; }
	double* GetArr() { return arr; }

	Array& operator = (const Array& a);
	double& operator [] (const int i);
	const double& operator [] (const int i) const;

	virtual void add(Array& a, Array& b, Array& c) = 0;
	virtual void foreach() = 0;
	virtual void Print(const Array& a) {};
	virtual void Read(Array& a) {};
};

