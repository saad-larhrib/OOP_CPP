#include <iostream>
#include <vector>

using namespace std;

class Adress{
private:
    string rue;
    string ville;
    int    codePostale;
public:
    Adress(string rue, string ville, int codePostale){
        this->rue = rue;
        this->ville = ville;
        this->codePostale = codePostale;
    }

    void afficherInfo(){
        cout << "Rue          : " << rue << endl;
        cout << "Ville        : " << ville << endl;
        cout << "Code Postale : " << codePostale << endl;
    }

};

class Person{
private:
    string name;
    int    age;
    Adress* adress;
public:
    Person(string name, int age, string rue, string ville, int codePostale){
        this->name = name;
        this->age = age;
        adress = new Adress(rue, ville, codePostale);
    }

    void afficherInfo(){
        cout << "Name         : " << name << endl;
        cout << "age          : " << age << endl;
        adress->afficherInfo();
    }

    ~Person(){
        delete adress;
    }

};


int main() {

    Person p("Ali", 25,"Rue 123", "Fes", 30000);
    p.afficherInfo();

    return 0;
}
