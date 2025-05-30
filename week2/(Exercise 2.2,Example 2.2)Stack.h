template <class ItemType>
class Stack
{
public:
	Stack();
	Stack(int max);
	~Stack();
	int IsEmpty()const;
	int IsFull()const;
	void Peek()const;
	void Push(ItemType newItem);
	void Pop(ItemType& item);
private:
	int top;
	int maxstack;
	ItemType* items;
};


