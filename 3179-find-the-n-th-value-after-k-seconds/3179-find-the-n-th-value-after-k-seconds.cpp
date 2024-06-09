class Solution {
public:
    const int MOD = 1000000007;
    int valueAfterKSeconds(int n, int k) {
         vector<int> arr(n, 1);  
    for (int second = 0; second < k; ++second) {
        vector<int> prefixSum(n, 0);
        prefixSum[0] = arr[0];
        for (int i = 1; i < n; ++i) {
            prefixSum[i] = (prefixSum[i-1] + arr[i]) % MOD;
        }

        for (int i = 0; i < n; ++i) {
            arr[i] = prefixSum[i];
        }
    }

    return arr[n-1];
    }
};