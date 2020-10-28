#include <bits/stdc++.h>
using namespace std;

void solving(){
    int age = 0;

    cin >> age;

    cout << age/365 << " ano(s)" << endl;
    age %= 365;
    cout << age/30 << " mes(es)" << endl;
    age %= 30;
    cout << age << " dia(s)" << endl;
}
int main()
{
    solving();
}
