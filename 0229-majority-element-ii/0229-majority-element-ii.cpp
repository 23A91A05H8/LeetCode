class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int>res;
        unordered_map<int,int>freq;
        for(int num:nums){
            freq[num]++;
        }
        for(auto it:freq){
            if(it.second>(nums.size()/3)){
                res.push_back(it.first);
            }
        }
        return res;
    }
};