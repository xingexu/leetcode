class Solution {
public:
    bool isValid(string s) {
        if (s.size() % 2) return false;
        string st;
        for (char c : s) {
            if (c == '(') st.push_back(')');
            else if (c == '[') st.push_back(']');
            else if (c == '{') st.push_back('}');
            else {
                if (st.empty() || st.back() != c) return false;
                st.pop_back();
            }
        }
        return st.empty();
    }
};
