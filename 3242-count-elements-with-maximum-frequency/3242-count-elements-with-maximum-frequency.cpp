class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int sum = 0,maxi=0;
        unordered_map<int,int>freq;
        for(int num:nums){
            freq[num]++;
            maxi = max(maxi,freq[num]);
        }
        for(auto it:freq){
            if(it.second==maxi){
                sum = sum+it.second;
            }
        }
        return sum;

    }
};