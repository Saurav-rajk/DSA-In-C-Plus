//Count nodes in a BST that lies within a given range

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
// This is function from which no of nodes is calculating between the ranges.
int countRanges(Node* root,int low,int high){
	if(root==NULL){
		return 0;
	}
	int count=0;
	if(root->data>=low && root->data<=high){
		count++;
	}
	
	count+=countRanges(root->left,low,high);// Here we are calling the function rescusively.
	count+=countRanges(root->right,low,high);
	return count;
}
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
int main(){
	Node* root=NULL;
	root=insert(root,10);
	insert(root,5);
	insert(root,15);
	insert(root,3);
	insert(root,7);
	insert(root,12);
	insert(root,18);
	int low=5;
	int high=15;
	int count=countRanges(root,low,high);
	cout<<"Total no of nodes are-"<<count<<endl;
	return 0;
}


