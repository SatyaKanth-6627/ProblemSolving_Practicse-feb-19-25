// Problem Link
// https://leetcode.com/problems/the-k-th-lexicographical-string-of-all-happy-strings-of-length-n/description/

// Source Code

class Solution {
public:
   vector<string> res;

    string getHappyString(int n, int k) {
        backtrack("", n);
        return k <= res.size() ? res[k - 1] : "";
    }

    void backtrack(string s, int n) {
        if (s.length() == n) {
            res.push_back(s);
            return;
        }

        for (char c : {'a', 'b', 'c'}) {
            if (s.empty() || s.back() != c) {  // Ensure adjacent characters are different
                backtrack(s + c, n);
            }
        }
    }
};