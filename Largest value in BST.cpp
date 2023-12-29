//Given a Binary Search Tree (BST), find the second largest element.

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
void large(Node* root,int& counter,int k,int& result){
	if(root==NULL || counter>=k){
		return ;
	}
	large(root->right,counter,k,result);
	counter++;
	if(counter==k){
		result=root->data;
		return;
	}
	large(root->left,counter,k,result);
}
int larger(Node* root,int k){
	int result=-1;
	int counter=0;
	large(root,counter,k,result);
	return result;
}
int main(){
	Node* root = NULL;
    root = insert(root, 50);
    insert(root, 30);
    insert(root, 70);
    insert(root, 20);
    insert(root, 40);
    insert(root, 60);
    insert(root, 80);
    int k=2;
    int value=larger(root,k);
    cout<<"2nd largest value is-"<<value;
    return 0;
}

