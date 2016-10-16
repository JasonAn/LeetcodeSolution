#include <iostream>

using namespace std;
class Solution {
public:
    double myPow(double x, int n) {

        long m = n;

        if (n < 0){
            m = -m;
            x = 1/x;
        }

        if (m == 0)
            return 1;

        double ans = 1;

        if (m == 1)
            return x;

        if (m % 2 ==0)
            return myPow(x * x, m / 2);
        else
            return myPow(x * x, (m - 1) / 2) * x;



    }
};

int main() {

    Solution a;
    std::cout << a.myPow(2.0, -2147483648) << endl;

    return 0;
}