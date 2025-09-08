class Solution {
public:
    bool has_dec(int num){
        while(num>0){
            if(num%10 == 0) return false;
            num = num/10;
        }
        return true;
    }
    vector<int> getNoZeroIntegers(int n) {
        int a = 0;
        int b = n;
        while(1){
            a+=1;
            b-=1;
            if(a%10 !=0 && b%10!=0 && a+b==n && has_dec(a) && has_dec(b)){
                return {a,b};
            }
        }
        return {-1,-1};
    }
};