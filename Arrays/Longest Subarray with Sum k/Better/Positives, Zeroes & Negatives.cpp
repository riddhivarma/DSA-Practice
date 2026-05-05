class Solution {
  public:
    int longestSubarray(vector<int>& arr, int k) {
        // code here
        map<long long,int> mpp;
        int len=0;
        long long sum=0;
        for(int i=0;i<arr.size();i++){
            sum=sum+arr[i];
            if(sum==k) len=max(len,i+1);
            if(mpp.find(sum-k)!=mpp.end()) len=max(len,i-mpp[sum-k]);
            if(mpp.find(sum)==mpp.end()) mpp[sum]=i;
        }
        return len;
    }
};