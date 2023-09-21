#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector <int> v;
    for(int i = 0; i < n; i++){
        int in;
        cin >> in;
        v.push_back(in);
    }
    for(int i = n-1; i >= 0 ; i--){
        if(v[i]%2!=0){
            cout << v[i] << endl;
            break;
        }
    }
}