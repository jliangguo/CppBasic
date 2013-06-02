#ifndef MyClass_h
#define MyClass_h

#include <iostream>
#include <string>

using std::ostream;
using std::istream;
using std::string;

class MyClass
{
public:
	friend ostream& operator<<(ostream& os, const MyClass& myClass);
	friend istream& operator>>(istream& is, MyClass& myClass);
	void print();
private:
	int a;
	std::string str;
};

#endif