#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    bool Is_Even1,Is_Even2,Is_Even3;
    Is_Even1=!(n%2);
    Is_Even2=!(n/2.0-n/2);
    Is_Even3=!(5*n%2);
    cout<<Is_Even1<<" "<<Is_Even2<<" "<<Is_Even3;
    return 0;
}