class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length())  return false;
        unordered_map<char,int> mp1;
        unordered_map<char,int> mp2;
        for(char str1:s){
            mp1[str1]++;
        }
        for(char str2:t){
            mp2[str2]++;
        }

        return mp1==mp2;
    }
};
