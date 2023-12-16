//Delete and Search operration in BST.
#include<iostream>
using namespace std;
struct Node{
	int data;
	Node* left;
	Node* right;
};
class BST{
	Node* root;
	public:
	BST(){
		root=NULL;
	}
	bool isEmpty(){
		return root==NULL;
	}
	void insertion(int item){
		Node* newNode=new Node();
		Node* parent=NULL;
		newNode->data=item;
		newNode->left=NULL;
		newNode->right=NULL;
		if(isEmpty()){
			root=newNode;
		}else{
			Node* ptr=root;
			while(ptr !=NULL){
				parent=ptr;
				if(item<ptr->data){
					ptr=ptr->left;
				}else{
					ptr=ptr->right;
					
				}
			}
			if(item<parent->data){
				parent->left=newNode;
			}else{
				parent->right=newNode;
			}
		}
			
		
	}
	void inordertrav(Node* ptr){
		if(ptr==NULL){
			return;
		}
		inordertrav(ptr->left);
		cout<<ptr->data<<" ";
		inordertrav(ptr->right);
			
	}
	void inordertrav(){
		inordertrav(root);
	}
	bool SearchinBst(int key){
		Node* ptr=root;
		while(ptr !=NULL){
			if(ptr->data==key){
				return true;
			}
			else if(key<ptr->data){
				ptr=ptr->left;
			}else{
				ptr=ptr->right;
			}
		}
		return false;
	}
	void DeleteInBST(int key){
		root=deleteNode(root,key);
	}	
	private:
		Node* deleteNode(Node* root,int key){
			if(root==NULL){
				return root;
			}
			
			if(key<root->data){
				root->left=deleteNode(root->left,key);
			}
			else if(key>root->data){
			  root->right=deleteNode(root->right,key);
		    }else{
		    	if(root->left==NULL){
		    		Node* temp=root->right;
		    		delete root;
		    		return temp;
				}
				else if(root->right==
				NULL){
					Node* temp=root->left;
					delete root;
					return root;
				}
				
				Node* temp=findMin(root->right);
				root->data=temp->data;// This is used for swapping the value.
				root->right=deleteNode(root->right,temp->data);// This is for deleting the value.
			}
			return root;
		}
		
		Node* findMin(Node* node){// In this line we are finding inorder successor.
			while(node->left !=NULL){
				node=node->left;
			}
			return node;
		}
};
int main() {
    BST b;
    b.insertion(3);
    b.insertion(33);
    b.insertion(36);
    b.insertion(13);

    cout << "Inorder Traversal: ";
    b.inordertrav();
    cout << endl;

    int sk = 36;
    if (b.SearchinBst(sk)) {
        cout << "Key is present in BST" << endl;
    }
    else {
        cout << "Key is not present in BST" << endl;
    }

    int keyToDelete = 33;
    cout << "Deleting node with key " << keyToDelete << endl;
    b.DeleteInBST(keyToDelete);

    cout << "Inorder Traversal after deletion: ";
    b.inordertrav();
    cout << endl;

    return 0;
}

