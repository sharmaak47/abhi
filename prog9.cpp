#include<iostream>
using namespace std;
int main()
{
    int year;
    cout<<"Enter a year:";
    cin>>year;
    if(year % 400==0)

    {
        cout<<year<<"is a leap year.";

    }
    else if (year % 4==0)
    {
      cout <<year <<"is a leap year.";
    }
    else
    {
     cout<<year<<"is a not leap year.";
    }
    return 0;
}