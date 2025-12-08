/*Sqrt(x)
*/
#include <iostream>
using namespace std;

int mySqrt(int x) {
    if (x == 0 || x == 1) return x;

    int low = 0, high = x, ans = 0;
    while (low <= high) {
        long long mid = low + (high - low) / 2;
        long long sq = mid * mid;

        if (sq == x) return mid;       // perfect square
        if (sq < x) {
            ans = mid;                 // candidate
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return ans;
}

int main() {
    int x;
    cin >> x;
    cout << mySqrt(x) << endl;
    return 0;
}