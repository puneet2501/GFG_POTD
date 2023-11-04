class Solution {
public:
    int transitionPoint(int arr[], int n) {
        int l = 0, r = n - 1;
        int res = -1;

        while (l <= r) {
            int mid = (l + r) / 2;
            if (arr[mid] == 1) {
                res = mid;
                r = mid - 1;
            } 
            else l = mid + 1;
        }
        return res;
    }
};
