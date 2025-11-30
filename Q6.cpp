#include <iostream>
#include <unordered_set>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;
    Node(int d) : data(d), left(NULL), right(NULL) {}
};

bool checkDuplicate(Node* root, unordered_set<int>& s) {
    if (!root) 
    return false;
    if (s.find(root->data) != s.end())
     return true;
    s.insert(root->data);
    return checkDuplicate(root->left, s) || checkDuplicate(root->right, s);
}

int main() {
    Node* root = new Node(5);
    root->left = new Node(3);
    root->right = new Node(8);
    root->left->left = new Node(2);
    root->left->right = new Node(3);

    unordered_set<int> s;

    if (checkDuplicate(root, s))
        cout << "Duplicates Found";
    else
        cout << "No Duplicates";

    return 0;
}
