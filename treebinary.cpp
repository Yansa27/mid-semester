#include <iostream>

using namespace std;

// Struktur node untuk pohon biner
struct Node {
    int data;
    Node* left;
    Node* right;
};

// Fungsi untuk membuat node baru
Node* createNode(int data) {
    Node* newNode = new Node();
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

void postorderTraversal(Node* root) {
    if (root == NULL)
        return;
    // Traverse left subtree
    postorderTraversal(root->left);
    // Traverse right subtree
    postorderTraversal(root->right);
    // Print node data
    cout << root->data << " ";
}


// Fungsi untuk melakukan inorder traversal
void inorderTraversal(Node* root) {
    if (root == NULL)
        return;
    // Traverse left subtree
    inorderTraversal(root->left);
    // Print node data
    cout << root->data << " ";
    // Traverse right subtree
    inorderTraversal(root->right);
}

// Fungsi untuk melakukan preorder traversal
void preorderTraversal(Node* root) {
    if (root == NULL)
        return;
    // Print node data
    cout << root->data << " ";
    // Traverse left subtree
    preorderTraversal(root->left);
    // Traverse right subtree
    preorderTraversal(root->right);
}

int main() {
    // Membuat pohon biner dari NIM (231420073)
    Node* root = createNode(2);
    root->left = createNode(3);
    root->right = createNode(1);
    root->left->left = createNode(4);
    root->left->right = createNode(2);
    root->right->left = createNode(0);
    root->right->right = createNode(0);
    root->left->left->left = createNode(7);
    root->left->left->right = createNode(3);

    cout << "Inorder Traversal: ";
    inorderTraversal(root);
    cout << endl;

    cout << "Preorder Traversal: ";
    preorderTraversal(root);
    cout << endl;
    
    cout << "Postorder Traversal: ";
    postorderTraversal(root);
    cout << endl;

    return 0;
}
