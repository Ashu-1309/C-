#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int no,num,val,sum=0;
    cout<<"Enter the series number"<<endl;
    cin>>no;
    cout<<" Enter the number upto which you want to add ";
    cin>>num;
   
   for(int i=1; i<=num; i++)
   {
       val=pow(no,i);
       sum=sum+val;
       cout<<val;
       if(i< num)
       {
           cout<<" + ";
       }
       
   }
   cout<<endl;
   cout<<"The value after addition is ";
   cout<<sum;

}