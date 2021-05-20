// Abstraction :    Introduction to abstraction
// Author :         Anthony Guay
// Date :           20/5/2021
// Credit :         CodeBeauty tutorial @https://www.youtube.com/watch?v=Ui7Dca5Kbvw&ab_channel=CodeBeautyCodeBeauty

#include <iostream>
using namespace std;

class Smartphone
{
public:
    virtual void TakeASelfie() = 0;
    virtual void MakeACall() = 0;
};

class Android:public Smartphone
{
public:
    void TakeASelfie()
    {
        cout << "Android selfie\n";
    }

    void MakeACall()
    {
        cout << "Android calling\n";
    }
};

class iPhone :public Smartphone
{
public:
    void TakeASelfie()
    {
        cout << "iPhone selfie\n";
    }

    void MakeACall()
    {
        cout << "iPhone calling\n";
    }
};

int main()
{
    // In programming, abstraction mean displaying the important information while
    // hidding the complex detail.

    // Exemple :
    //              To use a coffee machine, you put cofee and water and press a
    //              button. You don't need to know every detail of the procedure
    //              because you only need to press the button. You do the same
    //              while programming basicly. We hide complex detail.

    Smartphone* s1 = new Android();
    Smartphone* s2 = new iPhone();

    s1->TakeASelfie();
    s2->TakeASelfie();

    s1->MakeACall();
    s2->MakeACall();

    cin.get();
}
