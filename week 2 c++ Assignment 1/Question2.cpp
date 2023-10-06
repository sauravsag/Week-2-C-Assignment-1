#include<iostream>
using namespace std;
int main(){
    float r;
    cout<<"radius of circle : ";
    cin>>r;
    float a , c;
    a = 3.14*r*r;
    c = 2*3.14*r;
    cout<<"area of circle : "<<a<<endl;
    cout<<"circumference of circle : "<<c<<endl;
    if (a>c)
    {
        cout<<"area is greater circumfernce";
    }
    else
    {
        cout<<"circumference is greater than area ";
    }
    
}