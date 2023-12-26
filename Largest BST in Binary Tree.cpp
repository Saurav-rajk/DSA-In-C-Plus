//Find the size of the largest BST in a binary tree

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
int size(Node* root){  // This function is return the size of BST.
	if(root==NULL){
		return 0;
	}
	return size(root->left) + 1 + size(root->right);
}
bool isBST(Node* root,int min,int max){ // This function is used to check wether the tree is BST or Not.
	if(root==NULL){  
		return true;
	}
	if(root->data<=min && root->data>=max){
		return false;
	}
	return isBST(root->left,min,max) && isBST(root->right,min,max);
}
void LargestBST(Node* root){
	if(isBST(root,INT_MIN,INT_MAX)){
		int value= size(root);
		cout<<"The size of largest BST is- "<<value<<endl;
	}else{
		cout<<"There is no any BST in Binary tree."<<endl;
	}
}
int main(){
	Node* root = new Node(10);
 
    root->left = new Node(15);
    root->right = new Node(8);
 
    root->left->left = new Node(12);
    root->left->right = new Node(20);
 
    root->right->left = new Node(5);
    root->right->right = new Node(2);
    LargestBST(root);
}


