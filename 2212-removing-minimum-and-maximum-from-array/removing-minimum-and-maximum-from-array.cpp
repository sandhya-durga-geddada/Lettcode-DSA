class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int minn = INT_MAX , maxx = INT_MIN;
        int p1,p2;
        int n = nums.size();
        for(int i=0;i<n;i++){
            if(nums[i] < minn){
                minn = nums[i];
                p1 = i;
            }
            if(nums[i] > maxx){
                maxx = nums[i];
                p2 = i;
            }
        }
        int l = min(p1,p2);
        int r = max(p1,p2);
         
        int a = r+1;
        int b = n - l;
        int c = (l + 1) + ( n-r);
        int ans = min({a,b,c});
        return ans;
    }
};