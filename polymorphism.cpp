#include<iostream>
using namespace std;

class Animal{
    public:

    void virtual sound()  {
        cout << "Animal Making Sound" << endl;
    }
};

class Cat: public Animal{
    public:

    void sound() override {
        cout << "Cat Making Sound" << endl;
    }
};

class Dog: public Animal{
    public:

    void sound() override {
        cout << "Dog Making Sound" << endl;
    }
};

int main() {

    Animal *a = new Cat();
    a->sound();

    return 0;
}