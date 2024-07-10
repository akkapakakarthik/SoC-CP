#include<iostream>
using namespace std; 

int main () {
    int ebony, ivory, damage;
    cin >> ebony >> ivory >> damage;
    int emax = damage - (damage % ebony);
    int imax = damage - (damage % ivory);
    // cout << emax << endl << imax << endl;
    bool ans = false;
    for (int edamage = 0; edamage <= emax; edamage += ebony){
        for (int idamage = 0; idamage <= imax; idamage += ivory){
            if (edamage + idamage == damage) ans = true;
        }
    }
    if (ans == true) cout << "Yes" << endl;
    else cout << "No" << endl;
}