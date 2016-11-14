#include <iostream>

using namespace std;

<<<<<<< Updated upstream

//Definition for a binary tree node.

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
=======
// Definition for a binary tree node.

struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode(int x) : val(x), left(NULL), right(NULL) {}
>>>>>>> Stashed changes
};

class Solution {
public:
<<<<<<< Updated upstream

    int dfs(TreeNode *root) {
        if (root == NULL)
            return 0;
        else
            return 1 + max(dfs(root->left), dfs(root->right));
    }

    int maxDepth(TreeNode* root) {

        return dfs(root);
=======
    int maxDepth(TreeNode* root) {

        if (root == nullptr)
            return 0;
        return 1 + max(maxDepth(root->left), maxDepth(root->right));

>>>>>>> Stashed changes
    }
};

int main() {

    TreeNode a(3);

    TreeNode *head = &a;

    Solution ans;

    cout << ans.maxDepth(head);

    return 0;
}