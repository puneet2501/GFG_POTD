class Solution {
public:
    static string printMinNumberForPattern(string S) {
        stack<int> st;
        int num = 1;
        string result;

        for (int i = 0; i < S.length(); i++) {
            st.push(num++);
            if (S[i] == 'I') {
                while (!st.empty()) {
                    result += to_string(st.top());
                    st.pop();
                }
            }
        }
        st.push(num++);
        while (!st.empty()) {
            result += to_string(st.top());
            st.pop();
        }
        return result;
    }
};