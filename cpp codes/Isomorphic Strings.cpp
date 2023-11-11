class Solution {
public:
    static bool areIsomorphic(string str1, string str2) {
        if(str1.length()!=str2.length()) return false;

        unordered_map<char, char> hm;
        int arr[26] = {0};

        for(int i = 0; i < str1.length(); i++) {
            char a = str1[i];
            char b = str2[i];

            if(hm.find(a) != hm.end()) {
                if(hm[a] != b) return false;
            }
            else {
                if(arr[b - 'a'] == 1) return false;
                arr[b - 'a'] = 1;
                hm[a] = b;
            }
        }
        return true;
    }
};