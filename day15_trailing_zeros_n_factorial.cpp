 class Solution {
public:
    int trailingZeros(int N) {
        int count = 0;
        while (N >= 5) {
            count += N / 5;
            N /= 5;
        }
        return count;
    }
};
