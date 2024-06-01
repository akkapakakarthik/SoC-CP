#include<iostream>
using namespace std;

int main() {
	
	int t;
	cin>>t;
	int a[3];


	for(int test = 0; test < t; test++){
		int count = 0;
		for(int i = 0 ; i<3; i++){
		cin>>a[i];
		}
		for(int i = 0; i<3; i++){
			for(int j = 0; j<3,i!=j; j++){
				if(a[i]+a[j] >= 10){
					count++;
				}
			}
		}
		if(count > 0){
			cout << "YES" << endl;
		}
		else cout << "NO" << endl;
	}
	return 0;
}
