#include <bits/stdc++.h>
using namespace std;

void solving(){
    int x; //total distance
    float y; //Fuel spent
    float kml; // km/l

    cout << fixed;
    cout.precision(3);
    cin>>x>>y;
    kml = x/y;

    cout << kml << " km/l" << endl;

}
int main()
{
    solving();
}