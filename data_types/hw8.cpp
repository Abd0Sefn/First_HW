#include<iostream>
#include<math.h>
#include<climits>
using namespace std;
int main()
{
    int n;
    cin>>n;
    cout<<n*(n+1)/2<<endl;
    // i think when n = sqrt(INT_MAX) overflow start
    return 0;
}