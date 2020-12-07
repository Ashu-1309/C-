#include<iostream>
#include<cmath>
using namespace std;


/* This code is used to find the LCM of Number  */

int gcd(int a,int b)
{
    if(b==0)
    {
        return a;

    }
    else
    {
        return gcd(b,a%b);
    }
}   

int LCM (int c,int d)
 {
     int x,y;

     /* Formating the number i.e arranging the number so that x become greater number and y become smaller number */

    if( c > d)
    { 
        x=c;
        y=d;

    }
    else
    {
        x=d;
        y=c;
    }
    

    /* Calling  GCD function*/
     return(x,gcd(x,y))*y;
 }   


int main()
 {
     int num1,num2;
     cout<<"Enter the First Number ";
     cin>>num1;   /* Input Taking */
     cout<<"Enter the Second Number ";
     cin>>num2;   /* Input Taking */
     cout<<"The LCM of the numbers is ";
     cout<< LCM(num1,num2);
}