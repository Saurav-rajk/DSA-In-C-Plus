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
		return new Node(key);
	}
	if(key<root->data){
		root->left=insert(root->left,key);
	}else if(key>root->data){
		root->right=insert(root->right,key);
	}
	return root;
}
Node* findMax(Node* root){  // This loop is used to give maximum value.
	while(root->right !=NULL){
		root=root->right;
	}
	return root;
}
Node* findPred(Node* root,int key){
	Node* pred=NULL;
	while(root !=NULL){
		if(key>root->data){
			pred=root;
			root=root->right;
		}else if(key<root->data){
			root=root->left;
		}else{
			if(root->left != NULL){
				return findMax(root->left);
			}else{
				break;
			}
		}
	}
	return pred;
}
void findPredecessor(Node* root){
	if(root==NULL){
		return;
	}
	findPredecessor(root->left);
	Node* pred=findPred(root,root->data);
	if(pred !=NULL){
		cout<<"Predecessor for node with key "<<root->data<<": "<< pred	->data << endl;
		
	}else{
		cout<< "No Predecessor found for node with key " << root->data << "." << endl;
    
	}
	findPredecessor(root->right);
}
int main(){
	Node* root = NULL;
    root = insert(root, 15);
    insert(root, 10);
    insert(root, 20);
    insert(root, 8);
    insert(root, 12);
    insert(root, 16);
    insert(root, 25);

    findPredecessor(root);

    return 0;
}

//#include<iostream>
//using namespace std;
//struct Node{
//	int data;
//	Node* left;
//	Node* right;
//	Node(int value){
//		data=value;
//		left=NULL;
//		right=NULL;
//	}
//};
//Node* insert(Node* root,int key){
//	if(root==NULL){
//		root=new Node(key);
//	}
//	if(key<root->data){
//		root->left=insert(root->left,key);
//	}else if(key>root->data){
//		root->right=insert(root->right,key);
//	}
//	return root;
//}
//Node* findMax(Node* root){
//	while(root->right != NULL){
//		root=root->right;
//	}
//	return root;
//}
//Node* findPred(Node* root,int key){
//	Node* pred=NULL;
//	
//	if(key > root->data){
//		pred=root;
//		root=root->right;
//	}else if(key <root->data){
//		root->left;
//	}else{
//		if(root->left != NULL){
//			return findMax(root->left);
//		}else{
//			break;
//		}
//		
//	}
//	return pred;
//}
//void findPredecessor(Node* root){
//	if(root==NULL){
//		return;
//	}
//	findPredecessor(root->left);
//		Node* pred=findPred(root,root->data);
//	if(pred !=NULL){
//		cout<<"Predecessor for node with key "<<root->data<<": "<< pred	->data << endl;
//		
//	}else{
//		cout<< "No Predecessor found for node with key " << root->data << "." << endl;
//    
//	}
//	findPredecessor(root->right);
//	
//}
//int main(){
//	Node* root = NULL;
//    root = insert(root, 15);
//    insert(root, 10);
//    insert(root, 20);
//    insert(root, 8);
//    insert(root, 12);
//    insert(root, 16);
//    insert(root, 25);
//
//    findPredecessor(root);
//
//    return 0;
//}

