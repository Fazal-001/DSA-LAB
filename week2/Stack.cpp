#include <stdlib.h>
#include"stack.h"
#include<iostream>
using namespace std;
template<class ItemType>
Stack<ItemType>::Stack()
{
	maxstack = 500;
	top = -1;
	items = new ItemType[500];
}
template<class ItemType>
Stack<ItemType>::Stack(int max)
{
	maxstack = max;
	top = -1;
	items = new ItemType[max];
}
template<class ItemType>
Stack<ItemType>::~Stack()
{
	delete items;
}
template<class ItemType>
int Stack<ItemType>::IsEmpty() const
{
	return (top == -1);
}
template<class ItemType>
int Stack<ItemType>::IsFull() const
{
	return (top == MAX_ITEMS - 1);
}
template<class ItemType>
void Stack<ItemType>::Push(ItemType newItem)
{
	if (IsFull())
	{
		cout << "Stack OverFlow!" << endl;
		exit(1);
	}
	top++;
	items[top] = newItem;
}
template<class ItemType>
void Stack<ItemType>::Pop(ItemType& item)
{
	if (IsEmpty())
	{
		cout << "Stack UnderFlow!" << endl;
		exit(1);
	}
	item = items[top];
	top--;
}