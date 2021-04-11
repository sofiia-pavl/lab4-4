#pragma once
#include "Array.h"
class SortArray :
    public Array
{
public:
	SortArray() { }
	SortArray(int n) : Array(n) { }
	virtual void Print(const SortArray& a);
	virtual void Read(SortArray& a);
	virtual void add(Array& a, Array& b, Array& c);
	virtual void foreach();
};

