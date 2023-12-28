//Update every key in a BST to contain the sum of all greater keys

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
	if(key < root->data){
		root->left=insert(root->left,key);
	}else if(key > root->data){
		root->right=insert(root->right,key);
	}
	return root;
}
void inorder(Node* root){
	if(root==NULL){
		return;
		
	}
	inorder(root->left);
	cout<<root->data<<" ";
	inorder(root->right);
}
int findSum(Node* root){
	if(root==NULL){
		return 0;
	}
	return root->data + findSum(root->left) +findSum(root->right);
}
void transform(Node* root, int& sum){
	if(root==NULL){
		return;
	}
	transform(root->left,sum);
	sum=sum-root->data;
	root->data += sum;
	transform(root->right,sum );
}
void transform(Node* root){
	int sum = findSum(root);
	transform(root,sum);
}



int main(){
	Node* root=NULL;
	root=insert(root,5);
	insert(root,3);
	insert(root,2);
	insert(root,4);
	insert(root,6);
	insert(root,8);
	insert(root,10);
	
	transform(root);
	inorder(root);
	return 0;	
}


