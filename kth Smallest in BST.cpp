#include <iostream>

// Data structure to store a binary tree node
struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int value) : data(value), left(nullptr), right(nullptr) {}
};

// Helper function to perform in-order traversal and find the k'th smallest node
void kthSmallestUtil(Node* root, int& counter, int k, int& result) {
    if (root == nullptr || counter >= k) {
        return;
    }

    // Traverse the left subtree
    kthSmallestUtil(root->left, counter, k, result);

    // Increment the counter
    counter++;

    // If the counter is equal to k, we have found the k'th smallest node
    if (counter == k) {
        result = root->data;
        return;
    }

    // Traverse the right subtree
    kthSmallestUtil(root->right, counter, k, result);
}

// Function to find the k'th smallest node in a BST
int kthSmallest(Node* root, int k) {
    int counter = 0;  // Counter to keep track of the current node being visited
    int result = -1;  // Variable to store the k'th smallest node value

    kthSmallestUtil(root, counter, k, result);

    return result;
}

// Function to insert a key into a BST
Node* insert(Node* root, int key) {
    // If the tree is empty, create a new node
    if (root == nullptr) {
        return new Node(key);
    }

    // Otherwise, recur down the tree
    if (key < root->data) {
        root->left = insert(root->left, key);
    } else if (key > root->data) {
        root->right = insert(root->right, key);
    }

    // Return the (unchanged) node pointer
    return root;
}

int main() {
    // Build a sample BST
    Node* root = nullptr;
    root = insert(root, 50);
    insert(root, 30);
    insert(root, 70);
    insert(root, 20);
    insert(root, 40);
    insert(root, 60);
    insert(root, 80);

    // Specify the value of k
    int k = 3;

    // Find the k'th smallest node in the BST
    int kthSmallestValue = kthSmallest(root, k);

    // Output the result
    std::cout << "The " << k << "'th smallest node in the BST is: " << kthSmallestValue << std::endl;

    // TODO: Free the allocated memory (deallocate the nodes)

    return 0;
}

