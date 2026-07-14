//Best time to buy and sell stock. (We have to find what will be the best days to buy and sell the stock such that the profit is maximized.)

#include <bits/stdc++.h>
using namespace std;

pair<int,int> maxProfit(vector<int>& arr){
    int mProfit=0, n=arr.size(), cnt=0;
    pair<int,int> ans;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            int profit=arr[j]-arr[i];
            if(mProfit<profit){
                cnt=1;
                mProfit=profit;
                ans={i+1,j+1};
            }
        }
    }
    if(cnt==0) return {-1,-1};
    return ans;
}
int main()
{
    vector<int> prices={7,1,5,3,6,4};
    pair<int,int> ans=maxProfit(prices); 
    cout<<ans.first<<" "<<ans.second; 
}