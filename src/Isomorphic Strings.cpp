class Solution {
public:
    bool isIsomorphic(string s, string t) {
       char map1[128] = {0}, map2[128] = {0};
       for (int i = 0; i < s.size(); i++) { 
           if (map1[s[i]] != map2[t[i]])    return false;
           map1[s[i]] = map2[t[i]] = t[i];
       }
       return true;
    }
};
