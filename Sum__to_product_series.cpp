#include<iostream>
using namespace std;

int main()
{
    int num,val,sum=0;
    cout<<"Enter the Number"<<endl;
    cin>>num;
    for(int i=1; i<=num; i++)
    {
        val=i*i;
        sum=sum+val;

    }
    cout<<sum;
}
