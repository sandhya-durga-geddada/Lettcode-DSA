class Solution {
public:
    bool partitionArray(vector<int>& nums, int k) {
        int n = nums.size();
        if(n%k != 0) return false;
        map<int,int> mp;
        int p = n/k;
        for(int d : nums){
            mp[d]++;
            if(mp[d] > p) return false;
        }

        return true;
    }
};