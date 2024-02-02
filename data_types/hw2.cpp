#include<iostream>
using namespace std;
int main()
    {
        string name1,name2,id1,id2;
        double avg,d1,d2;
        cout<<"What is student 1 name: ";cin>>name1;
        cout<<"His id: ";cin>>id1;
        cout<<"His maths exam grade: ";cin>>d1;
        cout<<"What is student 2 name: ";cin>>name2;
        cout<<"His id: ";cin>>id2;
        cout<<"His maths exam grade: ";cin>>d2;
        avg = (d1+d2)/2.0;
        cout<<"Students grades in maths\n";
        cout<<name1<<"(with id "<<id1<<") got grade "<<d1<<endl;
        cout<<name2<<"(with id "<<id2<<") got grade "<<d2<<endl;
        cout<<"Average grade is "<<avg;
        return 0;
    }
