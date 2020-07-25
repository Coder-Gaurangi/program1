#include<iostream>
#include<string>
using namespace std;
int main()
{
  int a,b,c;
  cout<<"enter the three numbers"<<endl;
    cin>>a>>b>>c;
    if(a>b&&a>c)
    {
        cout<<"number a is greater"<<endl;
    }
    else if(b>c&&b>a)
    {
         cout<<"number b is greater"<<endl;
    }
    else
    {
         cout<<"number c is greater"<<endl;
    }
}
