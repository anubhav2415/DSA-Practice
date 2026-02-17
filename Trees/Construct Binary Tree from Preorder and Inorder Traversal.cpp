class Solution {
public:
    unordered_map<int,int>mp;
    int pre=0;
    TreeNode* build(vector<int>& preorder, vector<int>& inorder,
    int instart, int inEnd){
        if(instart > inEnd) return NULL;

        int rootVal=preorder[pre++];
        TreeNode* root= new TreeNode(rootVal);

        int inIndex = mp[rootVal];

        root->left = build(preorder, inorder,instart,inIndex-1);
        root->right=build(preorder, inorder, inIndex+1, inEnd);

        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        for(int i=0;i<inorder.size();i++){
            mp[inorder[i]] =i;
        }
        return build(preorder, inorder, 0, inorder.size()-1);
    }
};
