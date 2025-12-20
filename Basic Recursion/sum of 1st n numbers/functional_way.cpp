#include <bits/stdc++.h>
using namespace std;

int printSum(int n){
    if(n==0) return 0;
    return n+printSum(n-1);
}
int main(){
    int n;
    cout<<"Enter the number upto which you want to find the sum : ";
    cin>>n;
    cout<<printSum(n);
}