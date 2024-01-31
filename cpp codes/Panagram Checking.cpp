class Solution
{
  public:
    //Function to check if a string is Pangram or not.
    bool checkPangram (string s) {
        // your code here
        unordered_map<char, int> umap;
        for(char i : s) umap[tolower(i)] = 1;
        for(char i='a'; i <= 'z';i++) if(!umap[i]) return 0;
        return 1;
    }

};