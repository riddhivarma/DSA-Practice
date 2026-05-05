class Solution {
  public:
    int longestSubarray(vector<int>& arr, int k) {
        int n = arr.size();
        int max_len = 0;

        // 1. Outer loop: Pick the starting point 'i'
        for (int i = 0; i < n; i++) {

            // 2. Middle loop: Pick the ending point 'j'
            for (int j = i; j < n; j++) {

                // 3. Inner loop: Calculate the sum from index i to j
                int current_sum = 0;
                for (int m = i; m <= j; m++) {
                    current_sum += arr[m];
                }

                // 4. Check if the sum matches target k
                if (current_sum == k) {
                    int current_len = j - i + 1;
                    max_len = max(max_len, current_len);
                }
            }
        }

        return max_len; 
    }
};


