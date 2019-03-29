#include <iostream>
#include <queue>
#include <stack>
using namespace std;
template <typename K,typename V>
class BinarySearchTree{
private:
    struct Node {
        K key;
        V value;
        Node *left;
        Node *right;

        Node(K key, V value) {
            this->key = key;
            this->value = value;
            this->left = this->right = NULL;
        }

    };
    Node* root;
    int count;
public:
    BinarySearchTree(){
        root=NULL;
        count=0;
    }
    ~BinarySearchTree(){
    }
    int getSize(){
        return count;
    }
    bool isEmpty(){
        return count==0;
    }
    void insert(K key,V value){
        root=insert(root,key,value);
    }
    bool contain(K key){
        return contain(root,key);
    }
    V* search(K key){
        return search(root,key);
    }
    void priOrder(){
        priOrder(root);
    }
    void levelOrder(){
        queue<Node*> q;
        q.push(root);
        while(!q.empty()){
            Node* node=q.front();
            q.pop();
            cout<<node->key<<endl;
            if(node->left)
                q.push(node->left);
            if(node->right)
                q.push(node->right);
        }
    }
    void priOrderNo(){
        stack<Node*> s;
        s.push(root);
        while(s.empty()){
            Node* node=s.top();
            s.pop();
            cout<<node->key<<endl;
            if(node->right)
                s.push(node->right);
            if(node->left)
                s.push(node->left);
        }
    }

private:
    Node* insert(Node *node,K key,V value){
    if(node==NULL){
        count++;
        return new Node(key,value);
    }
    if (key==node->key)
        node->value=value;
    else if(key<node->key)
        node->left=insert(node->left,key,value);
    else
        node->right=insert(node->right,key,value);
    }
    bool contain(Node* node,K key) {
        if(node==NULL)
            return false;
        if(node->key==key)
            return true;
        else if(node->key>key)
            return contain(node->left,key);
        else
            return contain(node->right,key);
    }
    V* search(Node* node,K key){
        if(node==NULL)
            return NULL;
        if(node-key==key)
            return &(node->value);
        else if(node->key>key)
            return search(node->left,key);
        else
            return search(node->right,key);
    }
    void priOrder(Node* node){
        if(node!=NULL) {
            cout << node->key << endl;
            priOrder(node->left);
            priOrder(node->right);
        }
    }
};












int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}