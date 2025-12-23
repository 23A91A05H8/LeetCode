class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int totalsum = 0;
        for(int i=0;i<arr.size();i++){
            int currentsum = 0;
            for(int j=i;j<arr.size();j++){
                currentsum = currentsum+arr[j];
                int length = j-i+1;
                if(length%2==1){
                    totalsum = totalsum+currentsum;
                }
            }
        }
        return totalsum;
    }
};