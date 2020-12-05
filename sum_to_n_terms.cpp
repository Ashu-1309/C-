#include<iostream>
using namespace std;
int main() {

    int i,val, sum=0;
    cout<< "Enter the number upto which you want to add"<<endl;
    cin>>val;
    cout<<endl;

    for(i=1; i<=val; i++)
    {
        sum=sum+i;

    }
   cout<<sum; 

}