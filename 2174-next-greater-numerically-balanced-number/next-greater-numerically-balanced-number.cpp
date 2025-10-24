class Solution {
public:
    bool balanced(int nn){
        map<int,int>mp;
        while(nn>0){
            int r = nn%10;
            mp[r]++;
            nn/=10;
        }
        for(const auto &it:mp){
            if(it.first != it.second)return false;
        }
        return true;
    }
    int nextBeautifulNumber(int n) {
        int temp = n+1;
        while(temp){
            if(balanced(temp)) return temp;
            temp++;
        }
        return 0;
    }
};