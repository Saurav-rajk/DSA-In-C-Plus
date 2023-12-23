#include<iostream>
using namespace std;
struct Node{
	int data;
	Node* left;
	Node* right;
	Node(int value){
		data=value;
		left=NULL;
		right=NULL;
	}
};
Node* insert(Node* root,int key){
	if(root==NULL){
		root=new Node(key);
	}
	if(key<root->data){
		root->left=insert(root->left,key);
	}else if(key>root->data){
		root->right=insert(root->right,key);
	}
	return root;
}
Node* LCA(Node* root,int p,int q){
	if(root==NULL){
		return root;
	}
	// If both node are less than root.
	if(p<root->data && q<root->data){
		return LCA(root->left,p,q);
	}
	// If both node are greator than root.
	else if(p>root->data && q>root->data){
		return LCA(root->right,p,q);
	}else{// If one node is on left and other on the right.
		return root;
	}
}
int main(){
	Node* root=NULL;
	root=insert(root,20);
	insert(root,10);
	insert(root,30);
	insert(root,5);
	insert(root,15);
	insert(root,25);
	insert(root,35);
	
	int p=5;
	int q=15;
	Node* lca=LCA(root,p,q);
	
	 if (lca != NULL) {
        cout << "Lowest Common Ancestor: " << lca->data << endl;
    } else {
        cout << "No Lowest Common Ancestor found." << endl;
    }

    return 0;
}


