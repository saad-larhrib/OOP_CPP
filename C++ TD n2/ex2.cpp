#include <iostream>
#include <vector>

using namespace std;

class CompteEtudiant {
private:
    vector<float> notes;
public:
    void ajouterNote(float note) {
        this->notes.push_back(note);
    }

    void obtenirMoyenne() {
        float moy = 0;
        if (notes.empty()) {
            cout << "Aucune note enregistree." << endl;
            return;
        }
        for(float n : notes){
            moy += n;
        }
        moy /= notes.size();
        cout << "La moyenne est : " << moy << endl;
    }

    void trouverNote(float note) {
        bool found = false;
        for(float n : notes){
            if(n == note) {
                cout << n << " trouvee !" << endl;
                found = true;
            }
        }
        if (!found)
            cout << "Note " << note << " non trouvee." << endl;
    }

    void supprimerNote(float note) {
        for (auto it = notes.begin(); it != notes.end(); ++it) {
            if (*it == note) {
                notes.erase(it);
                cout << "Note " << note << " supprimée." << endl;
                return;
            }
        }
        cout << "Note " << note << " non trouvée." << endl;
}
};

int main() {
    CompteEtudiant c;
    c.ajouterNote(12.3);
    c.ajouterNote(15.0);
    c.ajouterNote(9.5);
    c.obtenirMoyenne();
    c.trouverNote(15.0);
    c.trouverNote(10.0);
    c.supprimerNote(12.3);

    return 0;
}
