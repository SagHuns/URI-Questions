#include <bits/stdc++.h>
using namespace std;

void solving(){
    //joaozinho = 12km/l
    double hour;
    double speed;
    double kml;

    cin>>hour>>speed;

    cout << fixed;
    cout.precision(3);

    kml = (hour*speed)/12;

    cout << kml << endl;
}
int main()
{
    solving();
}
