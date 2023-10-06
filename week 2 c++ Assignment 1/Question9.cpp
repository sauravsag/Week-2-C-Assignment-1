#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"enter a character : ";
    cin>>ch;
    int c;
    c = (int)ch;
    if((c>=97 && c<=122) || (c>=65 && c<=90) ){
        cout<<ch<<" is a alphabate";
    }
    else if (c>=48 && c<=57)
    {
        cout<<ch<<" is a digit";
    }
    else if ((c>=33 && c<=47) || (c>=58 && c<=64)|| (c>=91 && c<=96)|| (c>=123 && c<=126))
    {
        cout<<ch<<" is a special character";
    }
}