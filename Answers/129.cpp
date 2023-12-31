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

    void dfs(TreeNode* root, int sum, int& result){

        if(root == nullptr) return;

        sum *= 10;
        sum += root->val;

        if(root->left == nullptr && root->right == nullptr){
            result += sum;
        }

        dfs(root->left, sum, result);
        dfs(root->right, sum, result);

    }

    int sumNumbers(TreeNode* root) {
       
        int result{};
        dfs(root, 0, result);

        return result;
    }
};