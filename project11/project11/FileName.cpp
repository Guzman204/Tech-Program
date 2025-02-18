#include <iostream>
const int ARRAY_LENGTH = 4;
//ejercicio 8
const int NUM_CLASSES = 10;
const int NUM_STUDENTS = 50;
struct Student // aprox 24 bytes x student
{
	int id; //bytes
	std::string name; //16 bytes
	int age;//4 bytes
};

struct Class // 16 + 24 * 50
{
	std::string className; // 16bytes
	Student students[NUM_STUDENTS]; //24 * 50
};

struct School
{
	std::string schoolName;
	Class* classes[NUM_CLASSES]; // Sin el * entonces abre 10 clases y cada una 16 + 24 * 50 bytes, con el * no estpy obligado a inicializar porque es una array de punteros.
								//con el * el peso es de 10 * 4 * numclases 
							   
};

void main()
{
	/* ejemplos de arrays
	int a = 10;
	int* p_a = &a;

	std::cout << "Value of a: " << a << std::endl;
	std::cout << "Adress of a: " << &a << std::endl;
	std::cout << "Value of pointer a: " << p_a << std::endl;
	std::cout << "Adress of pointer a: " << &p_a << std::endl;
	std::cout << "Value referenced of pointer a: " << *p_a << std::endl;
	int myArray[ARRAY_LENGTH] = { 5,3,8,9 };
	std::cout << "Value of myArray: " << myArray << std::endl;
	std::cout << "First element of myArray: " << *myArray << std::endl;
	for (int i = 0; i < ARRAY_LENGTH; i++)
	{
		std::cout << *(myArray + i) << std::endl; //estructura de la array[]
	}
	int* firstElement = myArray;
	
	int* it = myArray;
	for (int i = 0; i < ARRAY_LENGTH; i++)
	{
		std::cout << *it << std::endl;
		++it;
	}
	//loop para arrays que lo hace mas simple
	for (int element : myArray)
	{
		std::cout << element << std::endl;
	}
	for (auto element : myArray)
	{
		std::cout << element << std::endl;
	}*/
	//ejercicio 8

	for (int i = 0; i < 3; i++)
	{
		int id = i + 1;
	}
}

