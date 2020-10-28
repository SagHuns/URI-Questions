#include <bits/stdc++.h>
using namespace std;

void solving(){
    int time;
    int second, minute, hour;
    cin>>time;

    second = time;
    second %= 60;
    minute = time/60;
    minute %= 60;
    hour = time/3600;

    cout << hour << ":" << minute << ":" << second << endl;

}
int main()
{
    solving();
}
