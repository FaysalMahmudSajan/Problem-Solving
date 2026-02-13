// Problem: Two Frogs
// Links: https://codeforces.com/contest/2055/problem/A


#include<iostream>
using namespace std;

int main(void){
    int t;
    cin>>t;
    int n,a,b;
    while(t--){
        cin>>n>>a>>b;
        if(abs(a-b)&1)cout<<"No\n";
        else cout<<"Yes\n";
    }
}