#include<iostream>
using namespace std;
int main()
{
    int n,years,months,days;
    cin>>n;
    years = n/360;
    months = n%360 / 30 ;
    days = n%360%30;
    cout<<years<<" "<<months<<" "<<days;
    return 0 ;
}