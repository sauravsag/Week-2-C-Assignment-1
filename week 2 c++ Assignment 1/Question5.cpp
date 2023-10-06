#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"1st,2nd and 3rd side of triangle : ";
    cin>>a>>b>>c;
    if (a==b && a==c)
    {
        cout<<"these are sides of equilateral traingle ";
    }
    else if ((a==b  && b!=c) || (c==a && b!=a))
    {
        cout<<"these are side of isosceles triangle.";
    }
    else if (a!=b && a!=c && c!=b)
    {
        cout<<"these are side of scalar triangle.";
    }
}