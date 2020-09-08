#include <bits/stdc++.h>
using namespace std;

void solving(){
    int a,b,c;
    cin>>a>>b>>c;

    if (a>=b && a>=c){
        cout << a << " eh o maior" << endl;
    } else if (b>=a && b>=c){
        cout << b << " eh o maior" << endl;
    } else{
        cout << c << " eh o maior" << endl;
    }
}

int main()
{
    solving();
}