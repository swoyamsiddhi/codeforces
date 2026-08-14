#include <iostream>
#include <cstdlib>
using namespace std;
 
int main() {
    int x1, x2, x3;
    cin >> x1 >> x2 >> x3;
 
    int median;
 
    if ((x1 <= x2 && x2 <= x3) || (x3 <= x2 && x2 <= x1))
        median = x2;
    else if ((x2 <= x1 && x1 <= x3) || (x3 <= x1 && x1 <= x2))
        median = x1;
    else
        median = x3;
 
    int sum = abs(x1 - median)
            + abs(x2 - median)
            + abs(x3 - median);
 
    cout << sum;
 
    return 0;
}