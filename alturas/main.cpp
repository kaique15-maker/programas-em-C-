#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, somaIdade;
    double somaAltura;

    cout << "Quantas pessoas serao digitadas? ";
    cin >> n;

    string nomes[n];
    int idade [n];
    double altura [n];

    for (int i = 0; i < n; i++){
        cout << "Dados da " <<i+1<<"a pessoa" <<endl;
        cout << "NOME: ";
        cin.ignore(INT_MAX, '\n'); // ------------------ limpeza de buff
        getline (cin, nomes[i]);
        cout << "IDADE: ";
        cin >> idade[i];
        cout << "ALTURA: ";
        cin >> altura[i];
    }
    somaAltura = 0;
    for (int i = 0; i < n; i++){
        somaAltura = somaAltura + altura[i];
    }
    somaAltura = somaAltura / n;

    cout << fixed << setprecision(2);
    cout << "Altura media : " <<somaAltura << endl;

    somaIdade = 0;

    for (int i = 0; i < n; i++){
        if (idade[i] < 16){
            somaIdade = somaIdade + 1;
        }
    }

    somaIdade = (double)somaIdade * 100.0 / n;

    cout << fixed << setprecision(1);
    cout << "Pessoa com menos de 16 anos: " <<somaIdade << "%" << endl;

    for (int i = 0; i < n; i++){
        if (idade[i] < 16){
            cout << nomes[i] <<endl;
        }
    }

    return 0;
}
