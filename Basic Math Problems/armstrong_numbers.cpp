#include <bits/stdc++.h>
using namespace std;

bool is_it_Armstrong(int x){
    if(x==0) return true;
    int cnt=0;
    int temp=x;
    while(temp!=0){
        cnt++;
        temp=temp/10;
    }
    int sum=0;
    temp=x;
    while(temp!=0){
        int digit=temp%10;
        int power=1;
        for(int i=1;i<=cnt;i++){
            power=power*digit;
        }
        sum=sum+power;
        temp=temp/10;
    }
    if(sum==x) return true;
    else return false;
}

int main()
{
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    cout<<"Is the number Armstrong? "<<is_it_Armstrong(n);
}
