class Solution {
  public:
    int isPossible(int N, int arr[]) {
        long long sum=accumulate(arr,arr+N,0LL);
        return (sum%3==0);
    }
};