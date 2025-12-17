#include <iostream>
using namespace std;

bool isPalindrome(int x) {
        if(x<0) return false;
        int t=0;
        int n=x;
        int digit;
        while(x!=0){
            digit=x%10;
            if(t>INT_MAX/10 || (t==INT_MAX/10 && digit>7)) return false;
            t=t*10 + digit;
            x=x/10;
        }
        if(t==n) return true;
        else return false;
    }

int main()
{
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    cout<<"Is the number Palindrome? "<<isPalindrome(n);
}
