Given a generic tree and an integer n. Find and return the node with next larger element in the tree i.e. find a node with value just greater than n.
Note: Return NULL if no node is present with the value greater than n.

/************************************************************
 
    Following is the structure for the TreeNode class

    template <typename T>
    class TreeNode {
     public:
        T data;
        vector<TreeNode<T>*> children;
    
        TreeNode(T data) {
            this->data = data;
        }
    
        ~TreeNode() {
            for (int i = 0; i < children.size(); i++) {
                delete children[i];
            }
        }
    };

************************************************************/

TreeNode<int>* getNextLargerElement(TreeNode<int>* root, int x) {
    if(root==NULL){
        return NULL;
    }TreeNode<int>* ans=NULL;
    if(root->data>x){
        ans=root;
    }
    for(int i=0;i<root->children.size();i++){
        TreeNode<int>* temp=getNextLargerElement(root->children[i], x);
        if(temp==NULL){
            continue;
        }else{
            if(ans==NULL){
                ans=temp;
            }else if (temp->data<root->data && temp->data>x){
                ans=temp;
            }
        }
    }return ans;
}
