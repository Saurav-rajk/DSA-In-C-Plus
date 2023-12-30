// Sum of k smallest elements in BST

#include<iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int value) {
        data = value;
        left = NULL;
        right = NULL;
    }
};

void kSmallestSum(Node* root, int& counter, int k, int& result) {
    if (root == NULL || counter > k) {
        return;
    }

    kSmallestSum(root->left, counter, k, result);

    counter++;
    if (counter <= k) {
        result += root->data;
    }

    kSmallestSum(root->right, counter, k, result);
}

int kthSmallestSum(Node* root, int k) {
    int counter = 0;
    int result = 0;
    kSmallestSum(root, counter, k, result);
    return result;
}

Node* insert(Node* root, int key) {
    if (root == NULL) {
        root = new Node(key);
    }
    else if (key < root->data) {
        root->left = insert(root->left, key);
    }
    else if (key > root->data) {
        root->right = insert(root->right, key);
    }
    return root;
}

int main() {
    // Build a sample BST
    Node* root = NULL;
    root = insert(root, 50);
    insert(root, 30);
    insert(root, 70);
    insert(root, 20);
    insert(root, 40);
    insert(root, 60);
    insert(root, 80);

    // Specify the value of k
    int k = 3;  // Note: Changed to 3 for the sum till the third smallest number

    // Find the sum of values up to the k'th smallest node in the BST
    int kthSmallestSumValue = kthSmallestSum(root, k);

    // Output the result
    cout << "The sum of values up to the " << k << "'th smallest node in the BST is: " << kthSmallestSumValue << endl;

    // TODO: Free the allocated memory (deallocate the nodes)

    return 0;
}

