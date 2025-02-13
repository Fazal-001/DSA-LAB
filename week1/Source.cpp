#include<iostream>
#include<math.h>
//#include"class.h"
//#include"template.h"
#include"template2.h"
//#include"template3.h"
using namespace std;
//int main()
//{
//	mysequence <int, 5> myints;
//	mysequence <double, 5> myfloats;
//
//	myints.setmember(0, 100);
//	myfloats.setmember(3, 3.1416);
//
//	cout << myints.getmember(0) << '\n';
//	cout << myfloats.getmember(3) << '\n';
//
//	return 0;
//}



int main(){
	mypair <int> myobject(100, 75);
	cout << myobject.getMax();
	return 0;
}


//int main()
//{
//	int i = 5, j = 6, k;
//	long l = 10, m = 5, n;
//	k = GetMax<int>(i, j);
//	n = GetMax<long>(l, m);
//	cout << k << endl;
//	cout << n << endl;
//	return 0;
//}



//int main()
//{
//	Complex a(1.0, 1.0);
//	Complex* b = new Complex(5.0);
//	Complex c(0, 0);
//	cout << "a real = " << a.Real() << "a imaginary " << a.Imag() << endl;
//	cout << "b real = " << b->Real() << "b Imaginary = " << b->Imag() << endl;
//	c = a + (*b);
//	cout << "c real " << c.Real() << "c imaginary = " << c.Imag() << endl;
//	delete b;
//	return 0;
//}
