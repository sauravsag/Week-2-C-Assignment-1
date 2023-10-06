#include<iostream>
using namespace std;
int main(){
    int x,y,z;
    cout<<"enter mark A: ";
    cin>>x;
    cout<<"enter mark B: ";
    cin>>y;
    cout<<"enter mark C: ";
    cin>>z;
    if (x<y)
    {
        if (x<z)
        {
            cout<<x<<" is least";
        }
        else{
            cout<<z<<" is least";
        }
    }
    else if (y<x)
    {
        if (y<z)
        {
            cout<<y<<" is least";
        }
        else{
            cout<<z<<" is least";
        }
    }
    
    
    
}