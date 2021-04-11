#pragma once
#include "Array.h"
class XorArray :
    public Array
{
public:
	XorArray() { }
	XorArray(int n) : Array(n) { }
	virtual void Print(const XorArray& a);
	virtual void Read(XorArray& a);
	virtual void add(Array& a, Array& b, Array& c);
	virtual void foreach();
};

