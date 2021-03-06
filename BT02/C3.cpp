#include<iostream>
using namespace std;
int main()
{
    double x,y;
    cout<<"nhap x";
    cin>>x;
    cout<<"nhap y";
    cin>>y;
    for (int i = 1; i < y; i++)
    {
        x=x*x;
    }
    cout<<x<<endl;
}
