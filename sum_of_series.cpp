#include<iostream>
#include<cmath>
using namespace std;
 int main()
 {
     double num;
     double pro=0;
     double val=1;
     cout<<endl;
     cout<<"Number uoto which series to be added"<<endl;
     cin>>num;
     for(int i=1; i<=num; i++)
     { 
        val=pow(i,i);
        pro=pro +1/val;
     } 
      cout<<endl;
      cout<<pro;

 }