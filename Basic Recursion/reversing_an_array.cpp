#include <bits/stdc++.h>
using namespace std;

void revArr(int i, int n, int arr[]){
    if(i>=n/2){
        cout<<"Reversed array is :  ";
        for(int i=0;i<n;i++) cout<<arr[i]<<"  ";
        return;
    }
    swap(arr[i],arr[n-i-1]);
    revArr(i+1,n,arr);
}
int main(){
    int n;
    cout<<"Enter the number of elements in the array : ";
    cin>>n;
    int arr[n];
    cout<<"Input the array : ";
    for(int i=0;i<n;i++) cin>>arr[i];
    revArr(0,n,arr);
}
