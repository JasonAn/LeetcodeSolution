#include <iostream>
#include <stack>

using namespace std;

//Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {

        stack<TreeNode*> Sp, Sq;

        if (p == NULL && q == NULL)
            return true;

        if ( (p == NULL) ^ (q == NULL) )
            return false;

        Sp.push(p);
        Sq.push(q);

        TreeNode *ptrP, *ptrQ;

        while(!Sq.empty() || !Sp.empty()){

            if (Sq.empty() != Sp.empty())
                return false;

            else {
                ptrP = Sp.top();
                Sp.pop();
                ptrQ = Sq.top();
                Sq.pop();

                if (ptrP->val != ptrQ->val) {
                    return false;
                }
                else if( (ptrP->left == NULL ^ ptrQ->left == NULL) || (ptrP->right == NULL ^ ptrQ->right == NULL) )
                {
                    return false;
                }

                else
                {
                    if (ptrP->left != NULL && ptrQ->left != NULL) {
                        Sp.push(ptrP->left);
                        Sq.push(ptrQ->left);
                    }

                    if (ptrP->right!= NULL && ptrQ->right != NULL){
                        Sp.push(ptrP->right);
                        Sq.push(ptrQ->right);
                    }
                }

            }

        }

        return true;

    }
};

int main() {

    TreeNode a(1);
    TreeNode b(1);

    Solution ans;

    cout << ans.isSameTree(&a, &b);

    return 0;
}