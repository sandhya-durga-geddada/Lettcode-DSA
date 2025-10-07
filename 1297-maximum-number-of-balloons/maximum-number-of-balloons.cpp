class Solution {
public:
    int maxNumberOfBalloons(string text) {
        map<char,int>mp;
        for(char c : text){
            mp[c]++;
        }
        mp['l'] /= 2;
        mp['o'] /= 2;

        return min({mp['b'], mp['a'], mp['l'], mp['o'], mp['n']});
    }
};