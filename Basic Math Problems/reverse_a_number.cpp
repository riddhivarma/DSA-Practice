#include <iostream>
using namespace std;

int reverse(int x) {
          int t=0;
          int n=x;
          while(n!=0){
            int digit=n%10;
            if(t>INT_MAX/10 || (t==INT_MAX/10 && digit>7)) return 0;
            if(t<INT_MIN/10 || (t==INT_MIN/10 && digit<-8)) return 0;
            t=t*10 + digit;
            n=n/10;
          }
          return t;
    }

int main()
{
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    cout<<"Reverse of the number is : "<<reverse(n);
}
