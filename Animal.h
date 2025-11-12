#ifndef ANIMAL_H_INCLUDED
#define ANIMAL_H_INCLUDED
#include<iostream>
#include<string>
using namespace std;
class Animal{
private:
    string name;
    int age;
    bool isHungry;
public:
    Animal();
    Animal(string name ,int age, bool isHungry);
    void display();
    void feed();
    ~Animal();
    string getName();
};

class Reptile : public Animal{
private:
   bool isVenomous;
public:
    Reptile();
    Reptile(bool isVenomous);
    ~Reptile();
};




#endif // ANIMAL_H_INCLUDED
