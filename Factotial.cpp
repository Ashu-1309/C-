#include<iostream>
using namespace std;
int main()
{
    int i,val,pro=1; 
    cout<<"Enter the Number"<<endl;
    cin>>val;
    for(i=val;i!=0;i--)
    {
     pro=pro*i;
    }
    cout<<"The Factorial of "<<val<<" is "<<pro<<endl;
}