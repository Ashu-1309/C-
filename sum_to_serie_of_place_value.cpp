#include<iostream>
#include<cmath>
using namespace std;
int main()
{
 int num,val,sum=0;
 cout<<"Enter the number upto which you want to add"<<endl;
 cout<<endl;
 cin>>num;

  for(int i=1;i<=num; i++)
   {
     val=(pow(10,i)-1);
     cout<<val<<endl;
     sum=sum+val;
   }
 cout<<"The Val after addition ";  
 cout<<sum<<endl;
}