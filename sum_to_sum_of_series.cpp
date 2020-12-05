#include<iostream>
using namespace std;

int main ()
{
    int num,val,sum=0;
    cout<<"Enter the Number"<<endl;
    cin>>num;
    for(int i=1; i<=num; i++)
    {
        for(int j=1;j<=i;j++)
        {
            sum=sum+j; /* Series  (1) + (1+2) + (1+2+3) + (1+2+3+4) + ... +(1+2+3+4+...+n).  */
        }
    }
    cout<<sum;
}
