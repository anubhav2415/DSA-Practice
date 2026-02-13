class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        vector<int>res;
        if(!root) return res;

        queue<TreeNode*> q;
        q.push(root);

        while(!q.empty()){
            int s=q.size();

            for(int i=0;i<s;i++){
                TreeNode* node=q.front();
                q.pop();

                if(i == s-1){
                    res.push_back(node->val);
                }

                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);
            }
        }
        return res;
    }
};
