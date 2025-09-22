class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        map<int,int> mp;
        for(int n:nums){
            mp[n]++;
        }
        int ans = INT_MIN;
        
        for(auto const &it : mp){
            ans = max(it.second,ans);
        }
        int res=0;
        for(auto const &it : mp){
            if(ans == it.second) res+=ans;
        }
        return res;
    }
};