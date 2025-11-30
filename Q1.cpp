#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

bool containsDuplicate(vector<int>& nums) {
    unordered_set<int> s;
    for(int x : nums) {
        if(s.find(x) != s.end())
            return true;
        s.insert(x);
    }
    return false;
}

int main() {
    vector<int> nums = {1, 2, 3, 1};
    bool result = containsDuplicate(nums);
    if(result)
        cout << "true";
    else
        cout << "false";
    return 0;
}
