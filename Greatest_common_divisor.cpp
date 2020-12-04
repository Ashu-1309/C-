#include<iostream>
using namespace std;

int GCD(int a,int b)
{
    if (b==0)
    {
        return a;

    }
    else
    {
        return GCD(b,a%b);
    }

  return a;  
}


int main()
{
    int val1,val2;
    cout<<"Enter the Numbers "<<endl;
    cin>>val1;
    cin>>val2;
    
    cout<<"The GCD of the Number is  "<<GCD(val1,val2);

}