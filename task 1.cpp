#include<bits/stdc++.h>
using namespace std ;

class Animal{
int id;
string name;
string gender;
int age;
float price;
bool availability;
public:
    Animal(){};
    Animal(int id,string name,string gender,int age,bool availability ){
    this->id=id;
        this->name=name;
            this->gender=gender;
                this->age=age;
                    this->availability=availability;

    }
int getid(int id){
return id;}
string getname(string name){
return name;}
string getgender(string gender){
return gender;}
int getage( int age){
return age;}
bool getavailability(bool availability){
return availability;}



   virtual void speak(){
    cout<<"Animalspeak:  ";
    }
   friend istream& operator>>(istream &input,Animal &a);
    friend ostream& operator<<(ostream& print,const Animal &a);


};
istream& operator>>(istream &input,Animal &a)
{
    input>>a.availability;
    return input;
}

ostream& operator<<(ostream& print,const Animal &a)
{
    print<<"availability: "<<a.availability<<endl;

    return print;

}
class Dog:public Animal{

public:
    void speak() {
    Animal::speak();
   cout<<"dog speak: ";
    }


};



 int main(){

  Dog d;
  d.speak();



 }
