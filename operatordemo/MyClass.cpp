#include "MyClass.h"

ostream& operator<<(ostream &os, const MyClass &myClass){
	os << "MyClass";
	return os;
}

istream& operator>>(istream& is, MyClass& myClass){
	is >> myClass.a >> myClass.str;
	return is;
}

void MyClass::print(){
	std::cout << a << ", " << str << std::endl;
}
