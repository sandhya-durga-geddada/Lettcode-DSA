class Solution {
public:
    bool isBalanced(string num) {
       
        int a = 0 , b = 0;
        for(int i=0;i<num.size();i++){
            if(i%2==0){
                a+= num[i] - '0';
            }
            else{
                b+= num[i] - '0';
            }
        }
        if(a!=b) return false;
        return true;
    }
};