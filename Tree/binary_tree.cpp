#include<bits/stdc++.h>
using namespace std;


class Node{

public:
    int data;
    Node* left;
    Node* right;
    Node(int val){
        data = val;
        left = right = NULL;
    }
};


class BinaryTree{

private:
    Node * Root;


public:
    BinaryTree(){
        Root = NULL;
    }

    void addRightChild(Node* parent, int val){
        if(Root == NULL){
           Root = new Node(val);
           return;
        }
        else if(parent->right != NULL){
            cout<<"Right child already exists"<<endl;
            return;
        }
        else{
            parent->right = new Node(val);
        }
       
    }
    void addLeftChild(Node* parent, int val){
        if(Root == NULL){
           Root = new Node(val);
           return;
        }
        else if(parent->left != NULL){
            cout<<"Left child already exists"<<endl;
            return;
        }
        else{
            parent->left = new Node(val);
        }
       
    }

    void setRoot(int val){
        if(Root == NULL){
            Root = new Node(val);
        }
        else{
            cout<<"Root already exists"<<endl;
        }
    }

    Node* getRoot(){
        return Root;
    }


    void inorder(Node* root){
        if(root == NULL){
            return;
        }
        inorder(root->left);
        cout<<root->data<<" -> ";
        inorder(root->right);
    }

    void preorder(Node* root){
        if(root == NULL){
            return;
        }
        cout<<root->data<<" -> ";
        preorder(root->left);
        preorder(root->right);
    }

    void postorder(Node* root){
        if(root == NULL){
            return;
        }
        postorder(root->left);
        postorder(root->right);
        cout<<root->data<<" -> ";
    }



};



int main(){

    BinaryTree tree;
tree.setRoot(1);
    
    Node* root = tree.getRoot();

    tree.addLeftChild(root, 2);
    tree.addRightChild(root, 3);
    tree.addLeftChild(root->left, 4);
    tree.addLeftChild(root->right, 5);

    cout<<"Inorder Traversal: ";
    tree.inorder(root);
    cout<<endl;

    cout<<"Preorder Traversal: ";
    tree.preorder(root);
    cout<<endl;

    cout<<"Postorder Traversal: ";
    tree.postorder(root);
    cout<<endl;

    return 0;
}