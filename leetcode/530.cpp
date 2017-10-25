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
    std::vector<TreeNode*> ListOfNodes;
    
    void CompileListOfNodes(TreeNode* node) {
        ListOfNodes.push_back(node);
        if (node->left != nullptr) { CompileListOfNodes(node->left); }
        if (node->right != nullptr) { CompileListOfNodes(node->right); }
    }
    int CalculateAnswer() {
        std::vector<int> ListOfDifferences;
        for (TreeNode* x: ListOfNodes) {
            for (TreeNode* y: ListOfNodes) {
                if (x->val != y->val) {
                    if ( std::abs(x->val - y->val) == 1) { return 1; }
                    ListOfDifferences.push_back(std::abs(x->val - y->val));
                }
            }
        }
        return *std::min_element( std::begin(ListOfDifferences), std::end(ListOfDifferences) );
    }
    
    
    
    int getMinimumDifference(TreeNode* root) {
        CompileListOfNodes(root);
        return CalculateAnswer();
    }
};