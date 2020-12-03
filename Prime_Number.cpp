#include <iostream>
using namespace std;
  int main()
  {

     int num,i,flag=0,val=0;
     cout<<"Enter the Number  "<<endl;
     cin>>num;

       for(i=2;i<=num/2;i++)
        {
          if(num%i ==0)
           {
              flag =1;
              break;
           }
        }
  
     if(flag==1)
      {
        cout<<"It is not prime Number"<<endl;

      }
      else if(flag==0)
     {
        cout<<"It is Prime "<<endl;
     }

  }