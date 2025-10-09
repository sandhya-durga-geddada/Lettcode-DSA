class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        map<char,int> mp1;
        for(char c : ransomNote) mp1[c]++;
        map<char,int> mp2;
        for(char c : magazine) mp2[c]++;

        for(auto const &it:mp1){
            if(mp2.find(it.first)==mp2.end() || mp1[it.first] > mp2[it.first]) return false;
        }

        return true;
    }
};