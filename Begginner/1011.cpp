#include <bits/stdc++.h>
using namespace std;


void solving(){
    double pi = 3.14159;
    double rad;
    double formula = 4/3.0;
    double volume = 0;
    cin>>rad;

    volume = formula * pi * pow(rad,3);
    cout<<fixed;
    cout.precision(3);
    cout<<"VOLUME = "<< volume<<endl;
}

int main()
{
    solving();
}