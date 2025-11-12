#ifndef VISITOR_H_INCLUDED
#define VISITOR_H_INCLUDED
#include<iostream>
#include"Animal.h"
#include"Enclosure.h"
#include<string>
using namespace std;
class Vistor{
private:
    string visitorName;
    int ticketsBought;

public:
    Vistor();
    Visitor(string visitorName , int ticketsBought);
    void displayInfo();
    ~Vistor();
};

#endif // VISITOR_H_INCLUDED
