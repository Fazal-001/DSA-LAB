
#pragma once
#include<iostream>
using namespace std;
template <class T>
class mypair
{
private:
	T a, b;
public:
	mypair(T first, T second)
	{
		a = first;
		b = second;
	}
	T getMax();
};
template <class T>
T mypair<T>::getMax()
{
	T retval;
	retval = (a > b) ? b : a;
	return retval;
}
