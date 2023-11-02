class Solution {
public:
    int minDist(int a[], int n, int x, int y) {
        int dist = 1e9;
        int xi = 0, yi = 0;
        bool f1 = false, f2 = false;

        for (int i = 0; i < n; i++) {
            if (a[i] == x) {
                f1 = true;
                xi = i;
            } else if (a[i] == y) {
                f2 = true;
                yi = i;
            }

            if (f1 && f2)
                dist = min(abs(xi, yi), dist);
        }
        return f1 && f2 ? dist : -1;
    }

    int abs(int a, int b) {
        return a > b ? a - b : b - a;
    }
};