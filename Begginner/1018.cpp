#include <bits/stdc++.h>
using namespace std;

void solving(){
    //banknotes = 100,50,20,10,5,2,1

    int valor;
    cin>>valor;
    cout<<valor<<endl;
    cout<< valor/100 << " nota(s) de R$ 100,00\n";
    valor%=100;
    cout<< valor/50 << " nota(s) de R$ 50,00\n";
    valor%=50;
    cout<< valor/20 << " nota(s) de R$ 20,00\n";
    valor%=20;
    cout<< valor/10 << " nota(s) de R$ 10,00\n";
    valor%=10;
    cout<< valor/5 << " nota(s) de R$ 5,00\n";
    valor%=5;
    cout<< valor/2 << " nota(s) de R$ 2,00\n";
    valor%=2;
    cout << valor << " nota(s) de R$ 1,00\n";

}
int main()
{
    solving();
}
