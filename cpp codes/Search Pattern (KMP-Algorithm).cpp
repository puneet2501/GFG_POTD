class Solution
{
    public:
    vector <int> search(string pat, string txt){
        vector<int> ans;
        size_t found = txt.find(pat);
        if(found==string::npos)
        {
            return {-1};
        }
        while(found!=string::npos)
        {
            ans.push_back(found+1);
            found = txt.find(pat, found+1);
        }
        
        return ans;
    }
     
};
