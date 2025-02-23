#include<iostream>
#include<conio.h>
using namespace std;



//int fact(int n)				// EXAMPLE 3.1
//{
//	if (n == 0)
//	{
//		return 1;
//	}
//	else
//	{
//		return (n * fact(n - 1));
//	}
//}
//int main()
//{
//	cout << fact(5) << endl;
//	_getch();
//	return 0;
//}



//void rev()					//EXAMPLE 3.2
//{
//	char ch;
//	cin.get(ch);
//	if (ch != '\n')
//	{
//		rev();
//		cout.put(ch);
//	}
//}
//int main()
//{
//	rev();
//	_getch();
//	return 0;
//}




//int power(int X, int N)			//EXAMPLE 3.3 And EXERCISE 3.1.
//{
//	if (N == 0)
//	{
//		return 1;
//	}
//	else
//	{
//		return power(X, N - 1) * X;
//	}
//}
//int main()
//{
//	for (int i = 0; i < 21; i++)
//	{
//		cout << "2  *  " << i << " = " << power(2, i) << endl;
//	}
//	return 0;
//}







//int Ackermann(int m, int n)			//EXAMPLE 3.4 and Exercise 3.2
//{
//	if (m == 0)
//	{
//		return n + 1;
//	}
//	else if (m > 0 && n == 0)
//	{
//		return Ackermann(m - 1, 1);
//	}
//	else if (m > 0 && n > 0)
//	{
//		return Ackermann(m - 1, Ackermann(m, n - 1));
//	}
//}
//int main()
//{
//	cout << Ackermann(3, 4) << endl;
//	return 0;
//}














void checkprime(int N)
{
	if (N == 1)
	{
		cout << "It is not a Prime Number." << endl;
	}
	else
	{
		int X = N-1;
		return(N % checkprime(X));
	}
}
int printnum(int n)
{
	if (n > 0)
	{
		cout << n << endl;
		return (printnum(n - 1));
	}
	else if (n == 0)
	{
		return n;
	}
	else
	{
		cout << n << endl;
		return (printnum(n + 1));
	}
}

int main()
{
	int x;
	cout << "Enter a number: " << endl;
	cin >> x;
	cout << printnum(x);
	checkprime(x);

	return 0;
}