class Solution {
public:

    int dfs(TreeNode* root, int maxso){
        if(!root) return 0;
        int count=0;
        if(root->val>=maxso){
            count=1;
            maxso=root->val;
        }
        count+=dfs(root->left,maxso);
        count+=dfs(root->right,maxso);

        return count;
    }
    int goodNodes(TreeNode* root) {
        return dfs(root, root->val);
    }
};
