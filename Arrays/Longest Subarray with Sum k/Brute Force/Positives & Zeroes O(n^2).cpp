class Solution {
  public:
    int longestSubarray(vector<int>& arr, int k) {
        int n = arr.size();
        int max_len = 0;

        // 1. Outer loop: Defines the starting point of the subarray
        for (int i = 0; i < n; i++) {
            int current_sum = 0;

            // 2. Inner loop: Expands the subarray from 'i' to 'j'
            for (int j = i; j < n; j++) {
                current_sum += arr[j];

                // 3. Check if current subarray sum equals target k
                if (current_sum == k) {
                    int current_len = j - i + 1;
                    max_len = max(max_len, current_len);
                }

                // 4. Optimization: Stop early if sum exceeds k
                // Note: This optimization assumes all elements are positive.
                if (current_sum > k) {
                    break;
                }
            }
        }

        return max_len;
    }
};
