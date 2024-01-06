class Solution {
public:
	int sumOfPowers(int a, int b){
	    // Code here
	    long sum = 0;

        for (int i = a; i <= b; i++) {
            int x = i;
            for (int j = 2; j * j <= x; j++) {
                while (x % j == 0) {
                    sum++;
                    x = x / j;
                }
            }
            if (x >= 2) sum++;
        }

        return sum;
	}
};
