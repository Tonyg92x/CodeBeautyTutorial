// Structures for beginners :	Learning Structures
// Author :                     Anthony Guay
// Date :                       13/5/2021
// Credit :                     CodeBeauty tutorial
//                              @https://www.youtube.com/watch?v=9j5KkOC_goQ&ab_channel=CodeBeauty

#include <iostream>
using namespace std;

struct Smartphone
{
	string name;
	int storageSpace;
	string color;
	float price;
};

struct Person 
{
	string name;
	int age;
	Smartphone smartphone;

	// etc.
};

void PrintSmartphoneInfo(Smartphone smartphone)
{
	cout << "Phone Name \t :\t \t" << smartphone.name << endl;
	cout << "storageSpace \t :\t \t" << smartphone.storageSpace << endl;
	cout << "Color \t \t :\t \t" << smartphone.color << endl;
	cout << "Price \t \t :\t \t" << smartphone.price << endl;
	cout << endl;
}

void PrintPersonInfo(Person person)
{
	cout << "Name \t: \t" << person.name << endl;
	cout << "Age \t: \t" << person.age << endl;
	cout << endl;
	cout << "SmarthPhone information of " << person.name << endl;
	cout << "------------------------------------------" << endl;
	cout << endl;
	PrintSmartphoneInfo(person.smartphone);
}

int main()
{
	Smartphone smartphone;
	smartphone.color = "Grey";
	smartphone.name = "Iphone 11";
	smartphone.price = 700;
	smartphone.storageSpace = 32;

	Smartphone smartphone2;
	smartphone2.color = "Black";
	smartphone2.name = "Iphone 12";
	smartphone2.price = 999.99;
	smartphone2.storageSpace = 64;

	PrintSmartphoneInfo(smartphone);
	PrintSmartphoneInfo(smartphone2);

	Person p;
	p.age = 24;
	p.name = "Tony";
	p.smartphone = smartphone2;

	PrintPersonInfo(p);

	system("pause>0");
}