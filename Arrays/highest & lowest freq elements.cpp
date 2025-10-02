#include <bits/stdc++.h>
using namespace std;

void countFreq(int arr[], int n){ 
    //create a container for storing frequency of elements (here it is map)
    map<int,int> mpp;
    
    //add frequency of elements in the map 
    for(int i=0;i<n;i++) mpp[arr[i]]++;
    
    //initialize necessary variables 
    int high_freq=mpp[arr[0]];
    int highest=arr[0];
    int low_freq=mpp[arr[0]];
    int lowest=arr[0];
    
    //iterate through the map to find final values
    for(auto it:mpp){
        if(it.second>high_freq) {
            high_freq=it.second; 
            highest=it.first; 
        }
        if(it.second<low_freq){
            low_freq=it.second;
            lowest=it.first; 
        }
    } 
    //print the final values
    cout<<"Highest and Lowest frequency elements are : "<<highest<<" and "<<lowest;
}

int main()
{
    int n;
    cout<<"Enter size of the array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements of the array : ";
    for(int i=0;i<n;i++) cin>>arr[i];
    countFreq(arr,n);
}