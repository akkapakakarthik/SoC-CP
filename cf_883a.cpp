#include<iostream>
using namespace std;

int main() {
    int t, nails;
    cin >> t;
    int count[t];
    for (int i = 0; i < t; i++){
        count[i] = 0;
    }
    for(int test = 0; test < t; test++){
        cin >> nails;
        for(int i = 0; i <  nails ;i++){
            int h, l;
            cin >> h >> l;
            if (h>l) count[test] ++;
        }
    }
    for (int i = 0; i < t; i++){
        cout << count [i] << endl;
    }    
    return 0;
}