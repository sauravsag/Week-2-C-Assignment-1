#include<iostream>
using namespace std;
int main(){
    float l,b;
    cout<<"length of rectangle : ";
    cin>>l;
    cout<<"breadth of rectangle : ";
    cin>>b;
    float a , p;
    a = l*b;
    p = 2*(l+b);
    cout<<"area of circle : "<<a<<endl;
    cout<<"perimeter of rectangle : "<<p<<endl;
    if (a>p)
    {
        cout<<"area is greater perimeter";
    }
    else
    {
        cout<<"perimeter is greater than area ";
    }
    
}