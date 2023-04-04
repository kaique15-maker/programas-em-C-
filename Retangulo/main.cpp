#include <bits/stdc++.h>

using namespace std;

int main()
{
    double base, altura, area, perimetro, diagonal;


    cout << fixed <<setprecision(4);
    cout << "Base do retangulo: ";
    cin >> base;
    cout << "altura do retangulo: ";
    cin >> altura;

    area = (base * altura);

    cout <<"AREA: " << area <<endl;

    perimetro = (base + altura) * 2;

    cout << "PERIMETRO: "<< perimetro <<endl;

    diagonal = sqrt(pow(base, 2.0) + pow(altura, 2.0));

    cout << "DIAGONAL: "<< diagonal <<endl;





    return 0;
}
