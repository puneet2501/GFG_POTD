class Solution
{
    public:
    //Function to check if a string can be obtained by rotating
    //another string by exactly 2 places.
    bool isRotated(string str1, string str2) {
        int m = str1.size();
        int n = str2.size();
    
        if (m != n) {
            return false;
        }
    
        bool a = true, b = true;
        for (int i = 0; i < n; i++) {
            if (a && (str1[i] != str2[(i + 2) % n]))
                a = false;
    
            if (b && (str1[i] != str2[(((i - 2) + n) % n)]))
                b = false;
    
            if (!a && !b)
                return false;
        }
    
        return true;
    }

};
