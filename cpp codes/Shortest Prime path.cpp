class Solution{   
public:
    int solve(int num1,int num2)
    {   
      //code here
      int flag=0;
       vector<bool>prime(10000,true);
       vector<bool>visited(10000,false);
      for(int i=1000;i<=9999;i++){
          for(int j=2;j*j<=i;j++){
              if(i%j==0){
                  prime[i]=false;
                  break;
              }
          }
       
      }
      queue<pair<int,int>>q;
      q.push({num1,0});
      visited[num1]=true;
      while(!q.empty()){
          auto top=q.front();
          q.pop();
          
          if(top.first==num2){
              return top.second;
          }
          string s1=to_string(top.first);
          for(int i=0;i<4;i++){
          
              for(char ch='0';ch<='9';ch++){
                      char present=s1[i];
                  s1[i]=ch;
                  int temp=stoi(s1);
                  if(!visited[temp] && temp>=1000 && prime[temp]==true){
                    //  count++;
                  q.push({temp,top.second+1});
                  visited[temp]=true;
                  } 
                  s1[i]=present;
              }
             
          }
      }
      return -1;
    }
};