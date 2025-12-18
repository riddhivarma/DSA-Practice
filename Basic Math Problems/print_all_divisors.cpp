#include <bits/stdc++.h>
using namespace std;

void printDivisors(int x){
    vector<int> ans;
    for(int i=1;i*i<=x;i++){
        if(x%i==0){
            ans.push_back(i);
            if((x/i)!=i) ans.push_back(x/i);
        }
    }
    sort(ans.begin(), ans.end());
    cout<<"List of Divisors :  ";
    for(auto it=ans.begin();it!=ans.end();it++) cout<<*(it)<<" ";
}

int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    printDivisors(n);
}
