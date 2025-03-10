#include <iostream>

using namespace std;

void tableDeMult(int rang, int limit){
    int resulat;
    for(int i = 0; i <= limit; i++){
        resulat = i * rang;
        cout << i << " x " << rang << " = " << resulat << endl;
    }
}

int main()
{
    int n = 5;
    int limit;

    cout << "Entrez la limite: ";
    cin >> limit;

    tableDeMult(n, limit);

    return 0;
}
