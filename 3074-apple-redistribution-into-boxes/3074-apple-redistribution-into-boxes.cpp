class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        int sum = 0;
        for(int i=0;i<apple.size();i++){
            sum = sum+apple[i];
        }
        int stored = 0;
        int resi = 0;
        sort(capacity.begin(),capacity.end());
        reverse(capacity.begin(),capacity.end());
        for(int i=0;i<capacity.size();i++){
            stored = stored+capacity[i];
            resi++;
            if(stored>=sum){
                break;
            }
        }
        return resi;
    }
};