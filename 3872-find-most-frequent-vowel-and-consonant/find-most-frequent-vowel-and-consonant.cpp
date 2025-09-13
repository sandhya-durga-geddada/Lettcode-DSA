class Solution {
public:
    int maxFreqSum(string s) {
        map<char,int> vowels;
        map<char,int> constants;
        for(int i=0;i<s.size();i++){
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
                vowels[s[i]]++;
            }
            else{
                constants[s[i]]++;
            }
        }
        int a = 0;
        int b = 0;
        for(const auto& it:vowels){
            a = max(a,it.second);
        }
        for(const auto& it:constants){
            b = max(b,it.second);
        }
        return a+b;
    }
};