class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        vector<double>res;
        sort(nums.begin(),nums.end());
        int left = 0;
        int right = nums.size()-1;
        while(left<=right){
            double ans = (nums[left]+nums[right])/2.0;
            res.push_back(ans);
            left++;
            right--;

        }
        sort(res.begin(),res.end());
        return res[0];
    }
};