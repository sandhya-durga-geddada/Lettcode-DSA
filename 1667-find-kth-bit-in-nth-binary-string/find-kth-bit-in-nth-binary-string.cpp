class Solution {
public:
    char findKthBit(int n, int k) {

        string ans = "0";
        for(int i=1;i<n;i++){
            string temp = "";
            temp = ans + "1";
            for(int j=0;j<ans.length();j++){
                if(ans[j] == '1') ans[j] = '0';
                else ans[j] = '1';
            }
            reverse(ans.begin(),ans.end());
            ans = temp + ans;
        }

        return ans[k-1];
        
    }
};