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

Node* insert(Node* root, int key) {
    if (root == NULL) {
        return new Node(key);
    }
    
    if (key < root->data) {
        root->left = insert(root->left, key);
    } else if (key > root->data) {
        root->right = insert(root->right, key);
    }
    
    return root;
}

bool search(Node* root, Node* temp, int k) {
    if (root == NULL) {
        return false;
    }
    
    Node* c = root;
    bool flag = false;
    
    while (c != NULL && flag != true) {
        if (c->data == k && temp->data != c->data) {
            flag = true;
            cout << "Pair found: " << c->data << " + " << temp->data << endl;
            return true;
        } else if (k < c->data) {
            c = c->left;
        } else {
            c = c->right;
        }
    }
    
    return false;
}

bool isPair(Node* root, Node* temp, int target) {
    if (temp == NULL) {
        return false;
    }
    
    return search(root, temp, target - temp->data) || isPair(root, temp->left, target) || isPair(root, temp->right, target);
}

int main() {
    Node* root = NULL;
    root = insert(root, 15);
    insert(root, 10);
    insert(root, 20);
    insert(root, 8);
    insert(root, 12);
    insert(root, 16);
    insert(root, 25);   
    bool test = isPair(root, root, 35);
    
    if (!test) {
        cout << "Pair Not found" << endl;
    }
    
    return 0;
}

