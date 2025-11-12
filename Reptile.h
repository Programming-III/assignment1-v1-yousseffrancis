
#ifndef REPTILE_H_INCLUDED
#define REPTILE_H_INCLUDED
#include<iostream>
#include<string>
using namespace std;
#include"Animal.h"
class Reptile : public Animal{
private:
   bool isVenomous;
public:
    Reptile();
    Reptile(bool isVenomous);
    ~Reptile();
};

#endif // REPTILE_H_INCLUDED
