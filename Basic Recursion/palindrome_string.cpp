#include <bits/stdc++.h>
using namespace std;

bool checkPalin(int i, string s){
    if(i>=s.size()/2) return true;
    if(s[i]!=s[s.size()-i-1]) return false;
    return checkPalin(i+1,s);
}
int main(){
    string s;
    cout<<"Enter the string : ";
    cin>>s;
    cout<<"Is the given string Palindrome? "<<checkPalin(0,s);
}
