class Solution
{
  public:
    int minOperation(int n)
    {
        int steps=0;
        while(n!=0){
            if(n%2==0) n = n/2;
            else n = n-1;
            steps++;
        }
        return steps;
    }
};