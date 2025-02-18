#include <iostream>

int main() 
{
	int a = 10;
	int* p_a = &a;

	std::cout << "Value of a: " << a << std::endl;
	std::cout << "Adress of a: " << &a << std::endl;
	std::cout << "Value of pointer a: " << p_a << std::endl;
	std::cout << "Adress of pointer a: " << &p_a << std::endl;
	std::cout << "Value referenced of pointer a: " << *p_a << std::endl;
}
