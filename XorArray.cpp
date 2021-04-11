#include "XorArray.h"

void XorArray::foreach()
{
	for (int i = 0; i < GetSize(); i++)
	{

		if (GetArr()[i] >= 0)
		{
			GetArr()[i] = sqrt(GetArr()[i]);
		}
	}
}

void XorArray::add(Array& a, Array& b, Array& c)
{
	int r = 0, t = 0, k = 0;

	while (r < a.GetSize() && t < b.GetSize())
	{

		if (a.GetArr()[r] == b.GetArr()[t])
		{
			c.GetArr()[k++] = a.GetArr()[r++];
		}
		 else if(a.GetArr()[r] == b.GetArr()[++t])
		{
			c.GetArr()[k++] = a.GetArr()[r++];
		}
	}

}
void XorArray::Read(XorArray& a)
{
	for (int i = 0; i < a.GetSize(); i++)
	{
		cout << " arr[" << i << "] - ? "; cin >> a[i];
	}
	cout << endl;
}

void XorArray::Print(const XorArray& a)
{
	cout << "The value of the elements of array" << endl;
	for (int i = 0; i < a.GetSize(); i++)
		cout << "arr[" << i << "] = " << a[i] << endl;
	cout << endl;
}