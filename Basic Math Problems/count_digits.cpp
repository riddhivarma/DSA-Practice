#include <iostream>
using namespace std;

int count_digits(int n){
    if(n==0) return 1;
    int cnt=0;
    while(n!=0){
        cnt++;
        n=n/10;
    }
    return cnt;
}

int main()
{
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    cout<<"The number of digits are : "<<count_digits(n);
}
