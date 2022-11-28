#include <iostream>
#include <conio.h>

using namespace std;

float A = 0.0;

float RacineCarree(float B){
    float un, un1;
    un = 1;
    un1 = (un + A/un)/2;

    while(un != un1){
        un = un1;
        un1 = (un + B/un)/2;
    }
    return un;
}

int main()
{
    cout << "Entrez le nombre dont vous cherchez la racine carree :" << endl;
    cin >> A;
    if(A > 0) cout << "La racine carree de " <<A << " vaut " << RacineCarree(A) << endl;
    else cout << "La racine carree de " <<A << " n'existe pas." << endl;
    return 0;
}
