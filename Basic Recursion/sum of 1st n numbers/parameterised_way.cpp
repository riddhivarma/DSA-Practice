#include <bits/stdc++.h>
using namespace std;

void printSum(int i, int sum){
    if(i<1){
        cout<<"Sum is "<<sum;
        return;
    }
    printSum(i-1,sum+i);
}
int main(){
    int n;
    cout<<"Enter the number upto which you want to find the sum : ";
    cin>>n;
    printSum(n,0);
}
