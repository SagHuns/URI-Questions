#include <bits/stdc++.h>
using namespace std;

int main()
{

    float x1,y1,x2,y2,dist;
    cout << fixed << setprecision(1);

    cin>>x1>>y1>>x2>>y2;

    cout << fixed << setprecision(4);
    dist = (pow((x2-x1),2))+(pow((y2-y1),2));
    cout<<sqrt(dist)<<endl;
}
    