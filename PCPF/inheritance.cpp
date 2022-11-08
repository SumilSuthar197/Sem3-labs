/*
 private : can be accessed in the same class
 protected : can be accessed in the same class and its derived classes
 public : can be accesses outside the class
*/
#include<iostream>
using namespace std;

 class sphere{
    public:
    float radius,pi=3.14;
    public:
    sphere(){radius=0;}
    sphere(float x){
        radius=x;
    }
    void area(){
        cout<<"The surface area of sphere is "<<4*pi*radius*radius<<endl;
    }
    void volume(){
        cout<<"The volume of sphere is "<<(4*pi*radius*radius*radius)/3<<endl;
    }
 };

 class tennis:public sphere{
    public:
    tennis(){
        radius=3.27;
    }
 };

 class cricket:public sphere{
    public:
    cricket(){
        radius=3.65;
    }
 };

 int main(){
    sphere s(5);
    tennis t;
    cricket c;
    s.volume();
    s.area();
    t.volume();
    t.area();
    c.volume();
    c.area();
 }