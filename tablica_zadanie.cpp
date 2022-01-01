#include <iostream>

using namespace std;

string tablica_produktow[5]= {"Mleko", "Pomidory", "Banany", "Mandarynki", "Cytryny"};
double tablica_cen[5]= {2.99, 3.00, 3.29, 2.79, 4.20};
int liczba;

int main()
{
    cout << "W sklepie znajduja sie takie produkty" <<endl;
    cout << tablica_produktow << endl;
    cout <<"Cene, ktorego produktu chcialbys sprawdzic? (wpisz liczbe)"<< endl;
    cin >> liczba;
    cout << endl<< endl;

    cout << tablica_produktow[-1]<< " kosztuje" <<tablica_cen[liczba-1];

    return 0;
}
