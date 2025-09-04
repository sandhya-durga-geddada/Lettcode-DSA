class Solution {
public:
    long long continuousSubarrays(vector<int>& nums) {
        long long ans = 0;
        multiset<int> se;
        int left = 0;
        for(int i=0;i<nums.size();i++){
            se.insert(nums[i]);
            while(abs(*se.begin()-*se.rbegin()) > 2){
                se.erase(se.find(nums[left]));
                left++;
            }
            ans += i-left+1;
        }
        return ans;
    }
};