class Solution{
public:
    vector<int> maxMeetings(int N,vector<int> &S,vector<int> &F){
        vector<int> ans;
        vector<pair<int,pair<int,int>>> temp;
        for(int i=0;i<N;i++){
            temp.push_back({F[i],{i,S[i]}});
        }
        sort(temp.begin(),temp.end());
        ans.push_back(temp[0].second.first+1);
        int tocompare = temp[0].first;
        for(int i=0;i<N-1;i++){
            
            if(tocompare < temp[i+1].second.second){
                int toadd = temp[i+1].second.first+1;
                ans.push_back(toadd);
                tocompare = temp[i+1].first;
            }
            
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};