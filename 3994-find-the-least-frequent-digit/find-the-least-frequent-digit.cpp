class Solution {
public:
    int getLeastFrequentDigit(int n) {
        map<int,int> mp;
        while(n>0){
            mp[n%10]++;
            n/=10;
        }
        int ans = INT_MAX;
        int c  = INT_MAX;
        for(auto const it : mp){
            if(it.second < c){
                c = it.second;
                ans = it.first;
            }
        }
        return ans;
    }
};