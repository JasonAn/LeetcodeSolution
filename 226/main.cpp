#include <iostream>

using namespace std;

//  Definition for a binary tree node.
  struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode(int x) : val(x), left(NULL), right(NULL) {}
  };


class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if (root == nullptr) {
        }

        else if (root->left == nullptr) {
            root->left = root->right;
            root->right == nullptr;
            invertTree(root->left);
        }

        else if (root->right == nullptr) {
            root->right = root->left;
            root->left = nullptr;
            invertTree(root->right);
        }
        else {
            TreeNode *temp = root->right;
            root->right = root->left;
            root->left = temp;
            invertTree(root->left);
            invertTree(root->right);
        }
        return root;
    }
};

int main() {
    TreeNode *root = new TreeNode(1);
    root->right = new TreeNode(2);

    cout << root->val << endl;
    //cout << root->left->val << endl;
    cout << root->right->val << endl;

    Solution a;

//    cout << a.invertTree(root);
    cout << root->val << endl;
//    cout << root->left->val << endl;
    cout << root->right->val << endl;

    return 0;
}