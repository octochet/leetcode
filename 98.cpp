/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool isValidBST(TreeNode* root) {
        if(root==nullptr) return true;
        if(root->left != nullptr && maxVal(root->left)->val >= root->val) return false;
        if(root->right != nullptr && minVal(root->right)->val <= root->val) return false;
        if(!isValidBST(root->left) || !isValidBST(root->right)) return false;
        return true;
    }

    TreeNode* minVal(TreeNode* root) {
        if(root!=nullptr) {
            while(root->left != nullptr) {
                root = root->left;
            }
        }
        return root;
    }

    TreeNode* maxVal(TreeNode* root) {
        if(root!=nullptr) {
            while(root->right != nullptr) {
                root = root->right;
            }
        }
        return root;
    }
};