
#ifndef BIRD_H_INCLUDED
#define BIRD_H_INCLUDED
#include<iostream>
#include<string>
using namespace std;
#include"Animal.h"
class Bird : public Mammal{
private:
    float wingSpan;
public:
    Bird();
    Bird(float wingSpan);
    ~Bird();
};


#endif // BIRD_H_INCLUDED
