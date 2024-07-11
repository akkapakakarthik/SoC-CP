#include<bits/stdc++.h>
using namespace std;

bool equivalentString(string a,string b,int size){
    if(a==b) return true;
    if(size%2==1) return false;
    string a1,a2,b1,b2;

    a1=a.substr(0,size/2);
    a2=a.substr((size/2),(size/2));
    b1=b.substr(0,size/2);
    b2=b.substr((size/2),(size/2));

    if(equivalentString(a1,b2,size/2)){
        return equivalentString(a2,b1,size/2);
    }
    else if(equivalentString(a1,b1,size/2)){
        return equivalentString(a2,b2,size/2);
    }
    return false;
}

int main(){
    string a,b;
    cin>>a>>b;
    bool ok=equivalentString(a,b,(int)a.size());
    if(ok) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}