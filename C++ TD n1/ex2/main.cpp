#include <iostream>
using namespace std;

template <typename T>

bool contient_element(T* tab, T val, int size) {
    for (int i = 0; i < size; i++) {
        if (tab[i] == val) {
            return true;
        }
    }
    return false;
}

int main() {
    int* ptr = new int[5];

    // Initialisation du tableau
    for (int i = 0; i < 5; i++) {
        ptr[i] = i + i; // Remplir avec 0, 2, 4, 6, 8
    }

    // Vérification de la présence de l'élément
    if (contient_element(ptr, 8, 5)) {
        cout << "L element est present dans le tableau." << endl;
    } else {
        cout << "L element n'est pas present dans le tableau." << endl;
    }

    delete[] ptr; // Libération de la mémoire allouée
    return 0;
}
