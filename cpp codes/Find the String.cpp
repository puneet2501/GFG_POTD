class Solution {
public:
    string findString(int n, int k) {
        string ans(n, '0');
        unordered_set<string> st;
        st.insert(ans);
        int i = k - 1;

        string curr = ans;

        while (true) {
            string temp = curr.substr(1) + char(i + '0');

            if (st.find(temp) == st.end()) {
                st.insert(temp);
                ans += char(i + '0');
                curr = temp;
                i = k - 1;
            } else {
                i--;
            }

            if (i < 0) {
                break;
            }
        }

        return ans;
    }
};