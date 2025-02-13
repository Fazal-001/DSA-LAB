#pragma once
#include<iostream>
using namespace std;
template <class T, int N>
class mysequence
{
private:
	T memblock[N];
public:
	void setmember(int x, T value);
	T getmember(int X);
};
template <class T, int N>
void mysequence<T, N>::setmember(int x, T value)
{
	memblock[x] = value;
}
template<class T, int N>
T mysequence <T, N>::getmember(int x)
{
	return memblock[x];
}
template <class T, int N>
T GetMax(T a, T b)
{
	T result;
	result = (a > b) ? a : b;
	result(result);
}
template <class T, int N>
T GetMin(T a, T b)
{
	T result;
	result = (a > b) ? b : a;
	result(result);
}
template<class T, int N>
T mysequence<T, N>::GetMax()
{
	T max = memblock[0];
	for (int i = 0; i < N; i++)
	{
		if (max < memblock[i])
		{
			max = memblock[i];
		}
	}
	return max;
}
template<class T, int N>
T mysequence<T, N>::GetMin()
{
	T min = memblock[0];
	for (int i = 0; i < N; i++)
	{
		if (min > memblock[i])
		{
			min = memblock[i];
		}
	}
	return min;
}
