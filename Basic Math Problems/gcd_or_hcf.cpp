#include <bits/stdc++.h>
using namespace std;

int gcd(int x, int y){
    while(x>0 && y>0){
        if(x>y) x=x%y;
        else y=y%x;
    }
    if(x==0) return y;
    return x;
}

int main(){
    int n1, n2;
    cout<<"Enter two numbers : ";
    cin>>n1>>n2;
    cout<<"GCD is : "<<gcd(n1, n2);
}