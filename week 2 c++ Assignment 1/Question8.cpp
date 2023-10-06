#include<iostream>
using namespace std;
int main(){
    float x1,x2,x3,y1,y2,y3,s1,s2;
    cout<<"1st coordinate : ";
    cin>>x1>>y1;
    cout<<"2nd coordinate : ";
    cin>>x2>>y2;
    cout<<"3rd coordinate : ";
    cin>>x3>>y3;
    s1 = (y2 - y1)/(x2 - x1);
    cout<<"slope of 1st two point = "<<s1<<endl;
    s2 = (y3 - y2)/(x3 - x2);
    cout<<"slope of another two point = "<<s2<<endl;
    if (s1 == s2)
    {
        cout<<"all points are coolinear";
    }
    else
    {
        cout<<"all points are non coolinear";
    }
    
}