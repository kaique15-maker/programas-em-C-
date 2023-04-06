#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, c, maior;

    cout << "Primeiro valor: ";
    cin >> a;
    cout << "Segundo valor: ";
    cin >> b;
    cout << "Terceiro valor: ";
    cin >> c;

   maior = 0;

    if (a < b && a < c){
        maior = a;
    }
    else if (b < c){
        maior = b;
    }
    else {
        maior = c;
    }

    cout << "MENOR: "<< maior<< endl;




    return 0;
}
