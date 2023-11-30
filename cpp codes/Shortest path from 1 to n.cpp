//User function Template for C++
// Shortest path from 1 to n

class Solution{   
public:
    int minimumStep(int n){
        //complete the function here
        int count = 0;
        while(n>1){
            count++;
            if(n%3==0) n = n/3;
            else n--;
        }
        return count;
    }
};