#include<iostream>
using namespace std;

int main()
{
      int n,num,sum=0;
    cout<<"Enter the Number"<<endl;
    cin>>n;
    cout<<"The Even Numbers are "<<endl;

    for(int i=1;i<=n; i++)
    {
        num=(2*i);
        sum=sum+num;
        cout<<num<<"  ";
    }
    cout<<endl;
    cout<<"The Sum of the even number is"<<endl;
    cout<<sum;
}