class Solution {
  public:
    string removeKdigits(string S, int k) {
        
        string ans="";
        for(char ch:S){
            while(ans.size() && ans.back()>ch  && k){
                ans.pop_back();
                k--;
            }
            if(ans.size() || ch!='0'){
                ans.push_back(ch);
            }
        }
        while(ans.size() and k){
            ans.pop_back();
            k--;
            
        }
        if(ans==""){
            return "0";
        }
        return ans;
    }
};