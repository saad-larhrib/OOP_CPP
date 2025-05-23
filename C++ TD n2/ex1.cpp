#include <iostream>

using namespace std;

class person{
private:
    string name;
    int age;
public:
    person(string name, int age){
        this->name = name;
        this->age  = age;
    }

    void introduire(){
        cout << "Je m'appelle " << name << " et j'ai " << age << " ans" << endl;
    }
};

int main()
{
    person p("saad",24);
    p.introduire();
    return 0;
}
