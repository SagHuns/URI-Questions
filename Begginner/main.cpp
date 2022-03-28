#include <bits/stdc++.h>
using namespace std;

void banknotesAndCoins(){
    double m;
    cin >> m;
    int n = m;

    cout << "NOTAS:" << endl;

    cout << n/100 << " nota(s) de R$ 100.00" << endl;
    n = n % 100;

    cout << n/50 << " nota(s) de R$ 50.00" << endl;
    n = n % 50;

    cout << n/20  << " nota(s) de R$ 20.00" << endl;
    n = n % 20;

    cout << n/10  << " nota(s) de R$ 10.00" << endl;
    n = n % 10;

    cout << n/5  << " nota(s) de R$ 5.00" << endl;
    n = n % 5;

    cout << n/2  << " nota(s) de R$ 2.00" << endl;
    n = n % 2;


    cout << "MOEDAS:" << endl;

    cout << n/1 << " moeda(s) de R$ 1.00" << endl;
    n = n % 1;

    n = m;
    m = (m - n)*100;
    int m2 = (int)m;

    cout << m2/50 << " moeda(s) de R$ 0.50" << endl;
    m2 = m2 % 50;

    cout << m2/25 << " moeda(s) de R$ 0.25" << endl;
    m2 = m2 % 25;

    cout << m2/10 <<  " moeda(s) de R$ 0.10" << endl;
    m2 = m2 % 10;

    cout << m2/5 <<  " moeda(s) de R$ 0.05" << endl;
    m2 = m2 % 5;

    cout << m2/1 <<  " moeda(s) de R$ 0.01" << endl;



}

int main()
{
    banknotesAndCoins();
    return 0;
}


