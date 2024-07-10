#include<iostream>
using namespace std;

int main() {
    int t, y, x, ans;
    cin >> t;
    for (int i = 0; i < t; i++){
        cin >> y >> x;
        if (x >= y){
            if (x % 2 != 0){
                ans = x*x - y + 1;
            }
            else {
                ans = (x-1)*(x-1) + y;
            }
        }
        else {
            if (y % 2 == 0){
                ans = y*y - x + 1;
            }
            else {
                ans = (y-1)*(y-1) + x;
            }
        }
        cout << ans << endl;
    }
}