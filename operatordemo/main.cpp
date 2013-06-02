#include <iostream>
#include "MyClass.h"

int main(){
	MyClass myclass;
	std::cout << myclass << std::endl;
	std::cin >> myclass;
	myclass.print();
}