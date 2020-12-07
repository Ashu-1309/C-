#include<iostream>
using namespace std;

int reverse(int val)
{
    int pn;
    pn=val %10;  /* The Number to be printed */
    val=val /10;
    cout<< pn;

    if(val>10)
     return reverse(val);
   
     
   return val;  
}


int main()
{
    int num;
    cout<<" Enter the Number to reversed "<<endl;
    cin>>num;
    cout<<" The reverse of the Number is "<<reverse(num);


}
