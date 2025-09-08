#include <iostream>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left, *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

bool inorder(TreeNode* root, long long &prev) {
    if (!root) return true;

    if (!inorder(root->left, prev)) return false;

    if (root->val <= prev) return false;  // not strictly increasing
    prev = root->val;

    return inorder(root->right, prev);
}

bool isValidBST(TreeNode* root) {
    long long prev = -1e18;  // very small value
    return inorder(root, prev);
}

int main() {
    TreeNode* root = new TreeNode(2);
    root->left = new TreeNode(1);
    root->right = new TreeNode(3);

    if (isValidBST(root))
        cout << "true";
    else
        cout << "false";

    return 0;
}
