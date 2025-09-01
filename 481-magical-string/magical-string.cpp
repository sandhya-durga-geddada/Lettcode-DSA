class Solution {
public:
    int magicalString(int n) {

        string s = "122"; 
        int t = 2;
        int sum = 2; 
        if (n > 3) {
            while (s.length() < n){
                int cnt = s[t]-'0';
                if (sum == 1) {
                    while (cnt--)
                        s.push_back('2');

                    sum = 2;

                } else if (sum == 2) {
                    while (cnt--)
                        s.push_back('1');

                    sum = 1;
                }
                t++;
            }
            int cnt = 0;
            for(int i=0;i<n;i++){
                char ch = '1';
                if(s[i]==ch) cnt++;
            }
            return cnt;
        }


        return 1;
    }
};