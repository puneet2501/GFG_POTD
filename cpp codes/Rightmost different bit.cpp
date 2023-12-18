class Solution
{
    public:
    //Function to find the first position with different bits.
    int posOfRightMostDiffBit(int m, int n)
    {
        // Your code here
        int pos = 1;
        if(m==n) return -1;
        m = m^n;
        
        while((m&1)!=1){
            pos++;
            m/=2;
        }
        return pos;
    }
};