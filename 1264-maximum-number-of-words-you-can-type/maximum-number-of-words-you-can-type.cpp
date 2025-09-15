class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        unordered_set<char> broken(brokenLetters.begin(), brokenLetters.end());
        int count = 0;
        
        stringstream ss(text);
        string word;
        
        while (ss >> word) {
            bool temp = true;
            for (char c : word) {
                if (broken.count(c)) {
                    temp = false;
                    break;
                }
            }
            if (temp) count++;
        }
        return count;
    }
};