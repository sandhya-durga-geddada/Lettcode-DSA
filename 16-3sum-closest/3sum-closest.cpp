class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
         int ans = nums[0] + nums[1] + nums[2];
        int n = nums.size();
        for(int i=0;i<n;i++){
            int left = i+1 , right = n-1;
            while(left<right){
                int sum = nums[i] + nums[left] + nums[right];
                if(sum==target){
                    return sum;
                }
                if(abs(sum-target) < abs(ans-target)){
                    ans = sum;
                }
                if(sum >  target){
                    right--;
                }
                else{
                    left++;
                }
            }
        }
        return ans;
    }
};