#include <bits/stdc++.h>

using namespace std;

int main()
{
    double idade1, idade2;
    string nome1, nome2;
    double media;

    cout << "Dados da primeira pessoa:" << endl << "NOME: ";
    getline(cin, nome1);
    cout <<"IDADE: ";
    cin >> idade1;
    cout << "Dados da segunda pessoa: "<<endl << "NOME: ";
    cin.ignore(INT_MAX, '\n'); //----------------------------- limpeza de buffer
    getline(cin, nome2);
    cout << "IDADE: ";
    cin >> idade2;

   media = (idade1 + idade2)/ 2;
   cout <<fixed <<setprecision(1);
   cout << "A idade media de " <<nome1<< " e " <<nome2<< " e de " <<media<< " anos.";


    return 0;
}
