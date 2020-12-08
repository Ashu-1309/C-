#include<iostream>
using namespace std;

int main()
{
    double num,sum=0,div;
    cout<<"Enter the Number  ";
    cin>>num;
    cout<<"Input Nuber of term  "<<num<<endl;

    for(int i=1;i<=num;i++)
    {
        if(i<num)
        {
         cout<<"1/"<<i<<"  +  ";
        }
        else if(i==num)
        {
            cout<<" 1/"<<i<<endl;
        }
        div=1/(double)i;
        sum=sum+div;
      
    }
   cout<<sum; 
}