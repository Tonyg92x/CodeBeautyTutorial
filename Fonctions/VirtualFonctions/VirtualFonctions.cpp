// VirtualFonctions :   Learning Virtual fonctions
// Author :             Anthony Guay
// Date :               19/5/2021
// Credit :             CodeBeauty tutorial @https://www.youtube.com/watch?v=T8f4ajtFU9g    
//

#include <iostream>
using namespace std;

class Instrument
{
public:
    virtual void MakeSound() = 0;
    // Pure virtual Functions for every derived class to implement
    // it's own MakeSound() function. When you put =0; it become
    // an abstract class wich is a function with at least one
    // virtual function.
};

class Accordion:public Instrument
{
public:
    void MakeSound()
    {
        cout << "Accordion playing... \n";
    }
};

class Piano :public Instrument
{
public:
    void MakeSound()
    {
        cout << "Piano playing... \n";
    }
};

int main()
{
    // Virtual fonctions have a very specific purpose.
    // With it, you can use run time polymorphism.


    // Example : You have a base class that have a fonction in it
    //              You create a derived class from that class
    //              that has the same fonction implementation.
    //              When we will use a class pointer, we will then
    //              use th emore derive version of that function.

    Instrument* i2= new Accordion();
    // i2->MakeSound(); 
    // Here it dosent get the more derived class if you don't put
    // virtual in front of the function in the class.

    Instrument* i1 = new Piano();
    // i1->MakeSound();

    Instrument* instuments[2] = { i1,i2 };
    
    for (int i = 0; i < 2; i++)
    {
        instuments[i]->MakeSound();
    }

    cin.get();
}

