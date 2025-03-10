#include <iostream>
#include <string>

using namespace std;

void fusionne(string s1, string s2){

    int v1 = s1.length();
    int v2 = s2.length();


    int i = 0;
    string result;

    while(i < v1 && i < v2){
        result += s1[i];
        result += s2[i];
        i++;
    }

    while(i < v1){
        result += s1[i];
        i++;
    }

    while(i < v2){
        result += s2[i];
        i++;
    }

    cout << result;

}

int main()
{
    string s1 = "abcdef";
    string s2 = "pqr";

    fusionne(s1, s2);

    return 0;
}
