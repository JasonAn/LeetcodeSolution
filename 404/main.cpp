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
    int sumOfLeftLeaves(TreeNode* root) {

        if (root == nullptr)
            return 0;

        if (root->left != nullptr && root->left->right == nullptr  && root->left->left == nullptr)
            return root->left->val + sumOfLeftLeaves(root->right);

        return sumOfLeftLeaves(root->left) + sumOfLeftLeaves(root->right);
    }

};

int main(){

    TreeNode *head = new TreeNode(3);
    head->left = new TreeNode(9);
    head->right = new TreeNode(20);
    head->right->left = new TreeNode(15);
    head->right->right = new TreeNode(7);

    Solution a;
    cout << a.sumOfLeftLeaves(head);
    return 0;

}