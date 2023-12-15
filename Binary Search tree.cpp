//#include <iostream>
//
//using namespace std;
//
//struct node{
//node* left;
//node* right;
//int data;
//};
//class BST{
//private:
//node* root;
//public:
//BST(){
//root = NULL;
//}
//int isEmpty() {return root==NULL;}
//void inst(int);
//void inordertrav();
//void inorder(node*);
//void preordertrav();
//void preorder(node*);
//void postordertrav();
//void postorder(node*);
//};
//
//void BST::inst(int item){
//node* p = new node;
//node* parent;
//p->data = item;
//p->left = NULL;
//p->right = NULL;
//parent = NULL;
//if(isEmpty()){
//root = p;
//}
//else{
//node* ptr;
//ptr = root;
//while(ptr != NULL){
//parent = ptr;
//if(item > ptr->data){
//ptr = ptr->right;
//}
//else{
//ptr = ptr->left;
//}
//}
//if(item < parent->data){
//parent->left = p;
//}
//else{
//parent->right = p;
//}
//}
//}
//
//void BST::inordertrav(){
//inorder(root);
//}
//
//void BST::inorder(node* ptr){
//if(ptr != NULL){
//inorder(ptr->left);
//cout<<" "<<ptr->data<<" ";
//inorder(ptr->right);
//}
//}
//
//void BST::preordertrav(){
//preorder(root);
//}
//
//void BST::preorder(node* ptr){
//if(ptr != NULL){
//cout<<" "<<ptr->data<<" ";
//preorder(ptr->left);
//preorder(ptr->right);
//}
//}
//
//void BST::postordertrav(){
//postorder(root);
//}
//
//void BST::postorder(node* ptr){
//if(ptr != NULL){
//postorder(ptr->left);
//postorder(ptr->right);
//cout<<" "<<ptr->data<<" ";
//}
//}
//
//int main()
//{
//int ch, newitem;
//BST tree;
//while(1){
//cout<<"\n\n1.Insertion 2.Inorder 3.Preorder 4.Postorder 5.Exit"<<endl;
//cout<<"Enter your choice: ";
//cin>>ch;
//switch(ch){
//case 1:
//cout<<"Enter number to be inserted: ";
//cin>>newitem;
//tree.inst(newitem);
//break;
//case 2:
//cout<<endl<<"Inorder traversal"<<endl;
//tree.inordertrav();
//break;
//case 3:
//cout<<endl<<"Preorder traversal"<<endl;
//tree.preordertrav();
//break;
//case 4:
//cout<<endl<<"Postorder traversal"<<endl;
//tree.postordertrav();
//break;
//case 5:
//exit(0);
//break;
//default:
//cout<<"Enter valid choice";
//break;
//}
//}
//return 0;
//}


//#include <iostream>
//using namespace std;
//
//struct Node {
//    Node* left;
//    Node* right;
//    int data;
//};
//
//class BST {
//    Node* root;
//
//public:
//    BST() {
//        root = NULL;
//    }
//
//    bool isEmpty() {
//        return root == NULL;
//    }
//
//    void insertion(int item) {
//        Node* newNode = new Node;
//        Node* parent = NULL;
//        newNode->data = item;
//        newNode->left = NULL;
//        newNode->right = NULL;
//
//        if (isEmpty()) {
//            root = newNode;
//        } else {
//            Node* ptr = root;
//            while (ptr != NULL) {
//                parent = ptr;
//                if (item > ptr->data) {
//                    ptr = ptr->right;
//                } else {
//                    ptr = ptr->left;
//                }
//            }
//            if (item < parent->data) {
//                parent->left = newNode;
//            } else {
//                parent->right = newNode;
//            }
//        }
//    }
//
//    void inordertrav(Node* ptr) {
//        if (ptr == NULL) {
//            return;
//        }
//        inordertrav(ptr->left);
//        cout << ptr->data << " ";
//        inordertrav(ptr->right);
//    }
//
//    void inordertrav() {
//        inordertrav(root);
//    }
//};
//
//int main() {
//    BST be;
//    be.insertion(10);
//    be.insertion(2);
//    be.insertion(3);
//    be.insertion(4);
//    be.insertion(5);
//    be.insertion(6);
//    be.insertion(7);
//    be.inordertrav();
//    return 0;
//}

//#include<iostream>
//using namespace std;
//struct Node{
//	public:
//		char data;
//		Node* left;
//		Node* right;
//};
//class BST{
//	Node* root;
//	public:
//		BST(){
//			root=NULL;
//		}
//		bool isEmpty(){
//			return root==NULL;
//		}
//		void insertion(char item){
//			Node* newNode=new Node();
//			Node* parent=NULL;
//			newNode->data=item;
//			newNode->left=NULL;
//			newNode->right=NULL;
//			if(isEmpty()){
//				root=newNode;
//			}else{
//				Node* ptr=root;
//				while(ptr !=NULL){
//					parent=ptr;
//					if(item>ptr->data){
//						ptr=ptr->right;
//					}else{
//						ptr=ptr->left;
//						
//					}
//				}
//				if(item<parent->data){
//					parent->left=newNode;
//				}else{
//					parent->right=newNode;
//				}
//			}
//				
//		}
//		void inordertrav(Node* ptr){
//			if(ptr==NULL){
//				return;
//			}
//			inordertrav(ptr->left);
//			cout<<ptr->data<<" ";
//			inordertrav(ptr->right);
//		}
//		
//		void inordertrav(){
//			inordertrav(root);
//		}
//};
//int main(){
//	BST be;
//	be.insertion('a');
//	be.insertion('b');
//	be.insertion('c');
//	be.insertion('d');
//	be.insertion('e');
//	be.inordertrav();
//	return 0;
//}

//#include<iostream>
//using namespace std;
//struct Node{
//	
//	char data;
//	Node* left;
//	Node* right;
//};
//class BST{
//	Node* root;
//	public:
//	BST(){
//		root=NULL;
//	}
//	bool isEmpty(){
//		return root==NULL;
//	}
//	void insertion(char item){
//		Node* newNode=new Node();
//		Node* parent=NULL;
//		newNode->data=item;
//		newNode->left=NULL;
//		newNode->right=NULL;
//		if(isEmpty()){
//			root=newNode;
//		}else{
//			Node* ptr=root;
//			while(ptr !=NULL){
//				parent =ptr;
//				if(item>ptr->data){
//					ptr=ptr->right;
//				}else{
//					ptr=ptr->left;
//				}
//			}
//			if(item<parent->data){
//				parent->left=newNode;
//			}else{
//				parent->right=newNode;
//			}
//		}
//		
//	}
//	void inordertrav(Node* ptr){
//		if(ptr==NULL){
//			return;
//		}
//		inordertrav(ptr->left);
//		cout<<ptr->data<<" ";
//		inordertrav(ptr->right);
//	}
//	void inordertrav(){
//		inordertrav(root);
//	}
//};
//int main(){
//	BST be;
//	be.insertion('a');
//	be.insertion('b');
//	be.insertion('c');
//	be.insertion('d');
//	be.insertion('e');
//	be.inordertrav();
//	return 0;
//}

//#include<iostream>
//using namespace std;
//struct Node{
//	int data;
//	Node* right;
//	Node* left;
//};
//class BST{	
//
//	Node* root;
//	public:
//	BST(){
//		root=NULL;
//	}
//	bool isEmpty(){
//		return root==NULL;
//	}
//	void insertion(int item){
//		Node* newNode=new Node();
//		Node* parent=NULL;
//		newNode->data=item;
//		newNode->left=NULL;
//		newNode->right=NULL;
//		if(isEmpty()){
//			root=newNode;
//		}else{
//			Node* ptr=root;
//			while(ptr != NULL){
//				parent=ptr;
//				if(item>ptr->data){
//					ptr=ptr->right;
//				}else{
//					ptr=ptr->left;
//				}
//			}
//			if(item<parent->data){
//				parent->left=newNode;
//			}else{
//				parent->right=newNode;
//			}
//		}
//	}
//	void inordertrav(Node* ptr){
//		if(ptr==NULL){
//			return;
//		}
//		inordertrav(ptr->left);
//		cout<<ptr->data<<" ";
//		inordertrav(ptr->right);
//	}
//	void inordertrav(){
//		inordertrav(root);
//	}
//	bool searchInBST(int key){
//		Node* ptr=root;
//		while(ptr !=NULL){
//			if(ptr->data==key){
//				return true;
//			}else if(key<ptr->data){
//				ptr=ptr->left;
//			}
//			else{
//				ptr=ptr->right;
//			}
//		}
//		return false;
//	}
//};
//int main(){
//	BST b;
//	b.insertion(4);
//	b.insertion(14);
//	b.insertion(34);
//	b.inordertrav();
//	cout<<endl;
//	int keyToSearch=18;
//	if(b.searchInBST(keyToSearch)){
//		cout<<keyToSearch<<"is present in the BST.\n";
//		
//	}else{
//		cout<<keyToSearch<<"is not present in the BST.\n";
//	}
//	return 0;
//}

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
				parent =ptr;
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
};
int main(){
	BST b;
	b.insertion(4);
	b.insertion(14);
	b.insertion(43);
	b.inordertrav();
}
