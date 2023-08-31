//Compile-Time Polymorphism can be achieved using
// 1.Function Overloading
// 2.Operator Overloading
// Today we will implementing:
// Operator Overloading
#include<iostream>
using namespace std;
class complex_numbers
{
private:
	int real;
	int image;
public:
	complex_numbers(int r, int i)//constructor
	{
		real = r;
		image = i;
	}
	complex_numbers operator+(complex_numbers &obj)//function
	{
		obj.real = obj.real + real;
		obj.image = obj.image + image;
		return obj;
	}
	void output()
	{
		cout << real << "+" << image << "i" << endl;
	}
};
void main()
{
	complex_numbers c1(10, 12), c2(12, 13);
	c2 = c1 + c2;
	cout << "Addition Complex Numbers:";
	c2.output();
	int a = 10, b = 10;
	string A = "Hello ", B = "World";
	cout << "Addition Operator(Integers): " << a + b << endl;//integers
	cout << "Concatenation Operator(Strings): " << A + B << endl;//strings
	system("pause");
}