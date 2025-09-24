class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        vector<int>res = {0};
        for(int num :nums){
        int size = res.size();
        for(int i=0;i<size;i++){
              res.push_back(res[i]^num);
        }
        }
        int total = 0;
        for(int it:res ){
            total += it;
        }
        return total;
    }
};