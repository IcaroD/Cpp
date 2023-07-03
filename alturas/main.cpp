#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N, menor;
    double media, soma, porcent;

    cout << "Quantas pessoas serao digitadas? ";
    cin >> N;

    string nome[N];
    int idade[N];
    double altura[N];

    for (int i = 0; i < N; i++) {
        cout << "Dados da " << i+1 << "a pessoa:" << endl;
        cout << "Nome: ";
        cin.ignore(INT_MAX, '\n');
        getline(cin, nome[i]);
        cout << "Idade: ";
        cin >> idade[i];
        cout << "Altura: ";
        cin >> altura[i];
    }

    soma = 0;
    for (int i = 0; i < N; i++) {
        soma =  soma + altura[i];
    }

    media = soma / N;

    menor = 0;
    for (int i = 0; i < N; i++) {
        if (idade[i] < 16) {
            menor++;
        }
    }

    porcent = menor * 100.0 / N;

    cout << endl;
    cout << "Altura media: " << fixed << setprecision(2) << media << endl;
    cout << "Pessoas com menos de 16 anos: " << fixed << setprecision(1) << porcent << '%' << endl;

    for (int i = 0; i < N; i++) {
        if (idade[i] < 16) {
            cout << nome[i] << endl;
        }
    }

    return 0;
}
