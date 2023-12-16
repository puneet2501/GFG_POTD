class Solution{
public:	
	// calculate the maximum sum with out adjacent
	int findMaxSum(int *arr, int n) {
	    // code here
	    if(n==1) return arr[0];
	    
	    for(int i=2; i<n; i++){
	        arr[i]+=arr[i-2];
	        arr[i-1] = max(arr[i-1],arr[i-2]);
	    }
	    return max(arr[n-1],arr[n-2]);
	}
};