/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    std::vector<std::vector<int>> treePaths;
    
    void getTreePaths(TreeNode* root, std::vector<int> givenPath)
    {
        if (root != nullptr) { givenPath.push_back(root->val); }
        if (root->left == nullptr && root->right == nullptr)
        {   //this is a leaf, so we are done
            treePaths.push_back(givenPath);
        }
        else
        {   //continue on down the chain
            if (root->left != nullptr) { getTreePaths(root->left, givenPath); }
            if (root->right != nullptr) { getTreePaths(root->right, givenPath); }
        }
    }
    
    int maxDepth(TreeNode* root) {
        if (root == nullptr) { return 0; } //trivial case
        
        std::vector<int> tempPath;
        getTreePaths(root, tempPath);
        
        //get the largest element of the TreePaths array
        int result = 0;
        
        for (std::vector<int> i: treePaths)
        {
            if (i.size() > result) { result = i.size(); }
        }
        
        return result;
    }
};