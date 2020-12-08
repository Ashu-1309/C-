
#include<iostream>
using namespace std;

int sum(int num,int add)
{
  int q,r;
  q=num/10;
  r=num%10;
  add=add+r;
  if(q >9)
  {
      cout<<"Hi"<<endl;
      return sum(q,add);

  }
  else if(q<9)
  {
      add=add+q;
      return add;
  }

 return add;

}

int main()
{
     int val,add=0;
     cout<<"Enter the Number"<<endl;
     cin>>val;
     cout<<"The  Sum of the digit is "<<sum(val,add);
}