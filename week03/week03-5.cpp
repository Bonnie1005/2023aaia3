// week03-5.cpp
// Leetcode 459
// abcabcabcabc
// abcabcabcabcabcabcabcabc 把他copy兩次
// abcabcabcabcabcabcabcabc 頭尾砍掉1個字母
class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        string s2 = s + s;
        int N = s2.length();
        return s2.substr(1,N-2).find(s) != string::npos;
    }
};