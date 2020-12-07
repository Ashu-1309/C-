#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"The Number Divisible 9 between 100 to 200"<<endl;

    
    for(int i=100; i<=200; i++ )
    {
        if(i % 9 == 0)
        {
            cout<<i<<" ";
        }
    }
    
    


}