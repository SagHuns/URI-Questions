#include <bits/stdc++.h>
using namespace std;

void solving(){
    int code1,code2,amount1,amount2;
    double cost1,cost2;
    double value1 = 0;
    double value2 = 0;
    double total = 0;

    cin>>code1>>amount1>>cost1;
    cin>>code2>>amount2>>cost2;
    value1 = amount1 * cost1;
    value2 = amount2 * cost2;
    total = value1+value2;
    cout<<fixed;
    cout.precision(2);
    cout<<"VALOR A PAGAR: R$ "<<total<<endl;
}

int main()
{
    solving();
}