class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        unordered_map<int,int> freq;

        for (int i = 0; i < nums.size(); ) {
            freq[nums[i]]++;

            if (freq[nums[i]] > 2) {
                nums.erase(nums.begin() + i); 
            } else {
                i++; 
            }
        }
        return nums.size();
    }
};
