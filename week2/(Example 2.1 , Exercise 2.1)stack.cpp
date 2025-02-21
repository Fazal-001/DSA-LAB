#include <stdlib.h>
#include"stack.h"
#include<iostream>
using namespace std;
Stack::Stack()
{
	top = -1;
}
int Stack::IsEmpty() const
{
	return (top == -1);
}
int Stack::IsFull() const
{
	return (top == MAX_ITEMS - 1);
}
void Stack::Push(ItemType newItem)
{
	if (IsFull())
	{
		cout << "Stack OverFlow!" << endl;
		exit(1);
	}
	top++;
	items[top] = newItem;
}
void Stack::Pop(ItemType& item)
{
	if (IsEmpty())
	{
		cout << "Stack UnderFlow!" << endl;
		exit(1);
	}	
	item = items[top];
	top--;
}
void Stack :: Peek()const
{
	cout << items[top];

} 
