#ifndef ENCLOSURE_H_INCLUDED
#define ENCLOSURE_H_INCLUDED
#include<iostream>
#include"Animal.h"
#include<string>
using namespace std;
class Enclosure : public Animal{
private:
    Animal*animal;
    int capacity;
    int currentCount;
public:
    Enclosure();
    Enclosure(string name ,int age,int capacity, bool isHungry, int currentCount);
    void addAnimal(Animal*a);
    void displayAnimal();
    ~Enclosure();






};

#endif // ENCLOSURE_H_INCLUDED
