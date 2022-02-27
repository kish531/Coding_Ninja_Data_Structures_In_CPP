For a given Binary Tree of integers, find and return the sum of all the nodes data.

/**********************************************************
	Following is the Binary Tree Node class structure

	template <typename T>
	class BinaryTreeNode {
    	public : 
    	T data;
    	BinaryTreeNode<T> *left;
    	BinaryTreeNode<T> *right;

    	BinaryTreeNode(T data) {
        	this -> data = data;
        	left = NULL;
        	right = NULL;
    	}
	};

***********************************************************/
int getSum(BinaryTreeNode<int>* root) {
    if(root==NULL){
        return 0;
    }if(root->left==NULL && root->right==NULL){
        return root->data;
    }
    int rightSum=getSum(root->right);
    int leftSum=getSum(root->left);
    return root->data+leftSum+rightSum;
}
