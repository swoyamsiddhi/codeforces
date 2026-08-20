#include <iostream>
#include <string>
using namespace std;
 
int main() {
    string str1, str2;
 
    cin >> str1 >> str2;
 
    string rev = string(str1.rbegin(), str1.rend());
 
    if (rev == str2) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
 
    return 0;
}