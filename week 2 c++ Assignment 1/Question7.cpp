#include<iostream>
using namespace std;
int main(){
   int x,y;
   cout<<"x-coordinate , y-cordinate = ";
   cin>>x>>y;
   if (x==0 && y==0)
   {
    cout<<"coordiantes are at origin";
   }
   else if (x==0 && y>0)
   {
    cout<<"coordiantes are on y axis";
   }
   else if (x>0 && y==0)
   {
    cout<<"coordiantes are on x axis";
   }
}