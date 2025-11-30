#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

vector<int> commonElements(vector<int>& A, vector<int>& B) {
    unordered_set<int> s(A.begin(), A.end());
    vector<int> result;

    for(int x : B) {
        if(s.find(x) != s.end())
            result.push_back(x);
    }
    return result;
}

int main() {
    vector<int> A = {1, 2, 3, 4};
    vector<int> B = {3, 4, 5, 6};

    vector<int> ans = commonElements(A, B);

    for(int x : ans)
        cout << x << " ";

    return 0;
}
