class Solution{
public:
	bool checkTriplet(int arr[], int n) {
	    unordered_map<int,int> mp;
	    for(int i=0;i<n;i++){
            mp[pow(arr[i],2)]++;
	    }
	    for(int i=0;i<n;i++){
	        for(int j=i+1;j<n;j++){
	            int sum=pow(arr[i],2)+pow(arr[j],2);
	            if(mp[sum]>0) return true;
	        }
	    }
	    return false;
	}
};