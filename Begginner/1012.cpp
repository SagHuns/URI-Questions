#include <bits/stdc++.h>
using namespace std;

int main (){
    float a, b, c;
    float triangle = 0;
    float circle = 0;
    float trapezio = 0;
    float square = 0;
    float rectangle = 0;
    
    cin>>a>>b>>c;
    cout<<fixed;
    cout.precision(3);
    
    triangle = a*c/2;
    circle = 3.14159* pow(c,2);
    trapezio = (a+b)*c/2;
    square = pow(b,2);
    rectangle = a*b;

    cout << "TRIANGULO: " << triangle << endl;
    cout << "CIRCULO: " << circle << endl;
    cout << "TRAPEZIO: " << trapezio << endl;
    cout << "QUADRADO: " << square << endl;
    cout << "RETANGULO: " << rectangle << endl;
}