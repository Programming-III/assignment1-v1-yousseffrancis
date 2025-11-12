#include"Animal.h"
#include"Enclosure.h"
#include"visitor.h"
#include<iostream>
using namespace std;
Animal :: Animal(){
 name = "";
 age = 0;
 isHungry = false;
}
Animal :: Animal(string name ,int age, bool isHungry){
    this->name = name;
    this-> age = age;
    this->isHungry = isHungry;
}
void Animal :: display(){
cout<<"animal info"<<endl;
cout<<"name: "<<name<<endl;
cout<<"age: "<<age<<endl;
cout<<"is Hungry: "<<isHungry<<endl;
}
void Animal :: feed(){
if(isHungry == true){
    cout<<"Hungry"<<endl;
}
else
    cout<<"Not Hungry"<< endl;
}
Animal :: ~Animal(){}
Enclosure :: Enclosure(){}
Enclosure :: Enclosure(string name ,int age,int capacity, bool isHungry, int currentCount) : Animal( name , age,  isHungry){
this->capacity = capacity;
this->currentCount = currentCount;
}
void Enclosure :: addAnimal(Animal*a){
if (currentCount<capacity){
    a[currentCount];
    currentCount++;
}
void Enclosure :: displayAnimal(){
cout<<"Enclosure 1 Animals"<<endl;
cout<<Animal.Mammal()<<endl;
cout<<Animal.Bird()<<endl;
cout<<Animal.Reptile()<<endl;
}
Enclosure :: ~Enclosure(){}
visitor :: Vistor(){}
visitor :: Vistor(string visitorName , int ticketsBought){
    this->visitorName=visitorName;
    this->ticketsBought ticketsBought;
}
void visitor :: displayInfo(){
cout<<"visitors info"<< endl;
cout<<visitor.getName()<<endl;
cout<<"tickets bought"<<ticketsBought<<endl;
}
visitor :: ~Vistor(){}
int main(){

}
