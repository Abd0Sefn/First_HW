#include<iostream>
using namespace std;
int main()
{
    int num1,num2,num3=-1;
    cin>>num1>>num2;
     num3=num1;                                
     num1=num2;                                //3 lines code to swap
     num2=num3;
    cout<<num1<<" "<<num2<<endl;
    return 0;
}