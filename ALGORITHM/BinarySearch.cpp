#include <bits/stdc++.h>

using namespace std;

// Return if a number is in a vector
// Vector need to be sorted
// Complexity: O(log(vector.size())
bool hasNumber(vector<int> v, int number) {
    int l = 0;
    int r = v.size() - 1;
    while(l <= r) {
        int mid = (l+r)/2;

        if(v[mid] < number) {
            l = mid + 1;
        }else if(v[mid] > number) {
            r = mid - 1;
        }else {
            return true;
        }
    }
    return false;
}

int main() {
    vector<int> vec;
    vec.push_back(-50);
    vec.push_back(1);
    vec.push_back(100);
    vec.push_back(150);
    vec.push_back(10000);
    vec.push_back(15023);

    bool has100 = hasNumber(vec, 100); // vector need to be sorted
    cout << "100 is in vector? " << has100 << endl;
    bool has70 = hasNumber(vec, 70);
    cout << "70 is in vector? " << has70 << endl;
}
