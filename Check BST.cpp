// Determine whether a given binary tree is a BST or not
#include <iostream>
#include <climits>

// Data structure to store a binary tree node
struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int value){
    	data=value;
    	left=NULL;
    	right=NULL;
	}
};

// Function to check if a binary tree is a BST
bool isBSTUtil(Node* node, int minValue, int maxValue) {
    // Base case: an empty tree is a BST
    if (node == NULL) {
        return true;
    }

    
    if (node->data <= minValue || node->data >= maxValue) {
        return false;
    }
    // Recursively check the left and right subtrees
    return isBSTUtil(node->left, minValue, node->data) && isBSTUtil(node->right, node->data, maxValue);
}

bool isBST(Node* root) {
    
    return isBSTUtil(root, INT_MIN, INT_MAX);
}

int main() {
    // Example: Constructing a binary tree
    Node* root = new Node(10);
    root->left = new Node(5);
    root->right = new Node(15);
    root->left->left = new Node(3);
    root->left->right = new Node(7);
    root->right->left = new Node(12);
    root->right->right = new Node(18);

    // Check if the binary tree is a BST
    if (isBST(root)) {
        std::cout << "The tree is a BST." << std::endl;
    } else {
        std::cout << "The tree is not a BST." << std::endl;
    }

   

    return 0;
}

