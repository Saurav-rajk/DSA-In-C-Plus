//#include<iostream>
//#include<stack>
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
//		root= new Node(key);
//	}
//	if(key<root->data){
//		root->left=insert(root->left,key);
//		
//	}else if(key > root->data){
//		root->right=insert(root->right,key);
//	}
//	return root;
//	
//}
//
//bool isPair(Node* root,int targetSum){
//	stack<Node*> leftStack;
//	stack<Node*> rightStack;
//	
//	Node* leftCur=root;
//	Node* rightCur=root;
//	
//	while(leftCur !=NULL){
//		leftStack.push(leftCur);
//		leftCur=leftCur->left;
//	}
//	while(rightCur !=NULL){
//		rightStack.push(rightCur);
//		rightCur=rightCur->right;
//	}
//	while(!leftStack.empty() && !rightStack.empty() && leftStack.top() != rightStack.top()){
//		int currentSum =leftStack.top()->data + rightStack.top()->data;
//		
//		if(currentSum == targetSum){
//			cout<<"Pair Found: ("<<leftStack.top()->data<<", "<<rightStack.top()->data<<endl;
//			return true;
//		}
//		
//		if(currentSum < targetSum){
//			leftCur=leftStack.top()->right;
//			leftStack.pop();
//			
//			while(leftCur !=NULL){
//			leftStack.push(leftCur);
//			leftCur=leftCur->left;
//		}
//		}else{
//		rightCur=rightStack.top()->left;
//		rightStack.pop();
//		
//		while(rightCur !=NULL){
//			rightStack.push(rightCur);
//			rightCur=rightCur->right;
//		}
//	}
//		
//	}
//	return false;
//}
//int main() {
//    // Build a sample BST
//    Node* root = NULL;
//    root = insert(root, 15);
//    insert(root, 10);
//    insert(root, 20);
//    insert(root, 8);
//    insert(root, 12);
//    insert(root, 16);
//    insert(root, 25);
//
//    // Specify the target sum
//    int targetSum = 28;
//
//    // Find a pair with the given sum in the BST
//    if (!isPair(root, targetSum)) {
//        std::cout << "No pair found with the sum " << targetSum << " in the BST." << std::endl;
//    }
//
//    
//    return 0;
//}

#include<iostream>
#include<stack>
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
bool isPair(Node* root,int targetSum){
	stack<Node*> leftStack;
	stack<Node*> rightStack;
	Node* leftcur=root;
	Node* rightcur=root;
	while(leftcur !=NULL){
		leftStack.push(leftcur);
		leftcur=leftcur->left;
	}
	while(rightcur !=NULL){
		rightStack.push(rightcur);
		rightcur=rightcur->right;
	}
	while(!leftStack.empty() && !rightStack.empty() && leftStack.top() != rightStack.top()){
		int currentSum=leftStack.top()->data+rightStack.top()->data;
		if(currentSum==targetSum){
			
			cout<<"Pair Found: ("<<leftStack.top()->data<<", "<<rightStack.top()->data<<endl;
			return true;
		
		}
		if(currentSum <targetSum){
			leftcur=leftStack.top()->right;
			leftStack.pop();
			
			while(leftcur != NULL){
				leftStack.push(leftcur);
				leftcur=leftcur->left;
			}
		}else{
			rightcur=rightStack.top()->left;
			rightStack.pop();
			
			while(rightcur != NULL){
				rightStack.push(rightcur);
				rightcur=rightcur->right;
			}
		}
	}
	return false;
}
int main() {
    // Build a sample BST
    Node* root = NULL;
    root = insert(root, 15);
    insert(root, 10);
    insert(root, 20);
    insert(root, 8);
    insert(root, 12);
    insert(root, 16);
    insert(root, 25);

    // Specify the target sum
    int targetSum = 28;

    // Find a pair with the given sum in the BST
    if (!isPair(root, targetSum)) {
        std::cout << "No pair found with the sum " << targetSum << " in the BST." << std::endl;
    }

    
    return 0;
}



