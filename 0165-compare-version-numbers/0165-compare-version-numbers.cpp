#include<sstream>
class Solution {
public:
    vector<int>fun(string s){
        vector<int>parts;
        stringstream ss(s);
        string num;
        while(getline(ss,num,'.')){
            parts.push_back(stoi(num));
        }
        return parts;
    }
    int compareVersion(string version1, string version2) {
        vector<int>a = fun(version1);
        vector<int>b = fun(version2);
        int n = max(a.size(),b.size());
        for(int i=0;i<n;i++){
        int x = (i<a.size()?a[i]:0);
        int y = (i<b.size()?b[i]:0);
            if(x<y) return -1;
            if(x>y) return 1;
        }
        return 0;
    }
};