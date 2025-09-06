class Solution {
public:
    int thirdMax(vector<int>& nums) {
       set<int> se(nums.begin(),nums.end());

       int a = INT_MIN;
       int b = INT_MIN;
       int c = INT_MIN;

       for(int n :se){
        if(n>a){
            c=b;
            b=a;
            a=n;
        }
        else if(n>b){
            c=b;
            b=n;
        }
        else{
            c =n;
        }
       }

       return  se.size() >= 3 ? c : a;
    }
};