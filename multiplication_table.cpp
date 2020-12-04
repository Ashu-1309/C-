#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter the number upto which you want Multiplication table"<<endl;
    cin>>num;
    cout<<endl;
    cout<<" Multiplication table from 1 to "<<num<<endl;

    for(int i=1;i<=10; i++)
    {
        for(int j=1;j<=num;j++)
        {
            cout<<j<<" x "<<i <<" = "<<j*i  <<"  ";
        }
        cout<<endl;


    }
}