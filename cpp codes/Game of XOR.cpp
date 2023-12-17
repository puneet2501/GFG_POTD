class Solution {
  public:
    int gameOfXor(int N , int A[]) {
        // code here
        int x = 0;
        
        for(int i=0; i<N; i++){
            int y = (i+1)*(N-i);
            if(y%2==1) x=x^A[i];
        }
        return x;
    }
};