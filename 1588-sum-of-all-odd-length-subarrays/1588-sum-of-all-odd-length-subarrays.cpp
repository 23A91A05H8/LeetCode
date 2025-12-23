class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int n = arr.size();
        long long res = 0;
        for (int i = 0; i < n; i++) {
            long long total = (long long)(i + 1) * (n - i);
            long long odd = (total + 1) / 2;
            res += arr[i] * odd;
        }
        return (int)res;
    }
};
