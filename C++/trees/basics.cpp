#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* left;
        Node* right;

        Node(int val){
            data = val;
            left = NULL;
            right = NULL;
        }
};

Node* buildTree(Node* root){

    cout<<"Enter data for Node:"<<endl;
    int data;
    cin>>data;
    if(data == -1) return NULL;
    root = new Node(data);


    cout<<"Enter data for left child"<<endl;
    root->left = buildTree(root->left);
    cout<<"Enter data for right child"<<endl;
    root->right = buildTree(root->right);
    return root;
}

void preOrder(Node* root){
    if(root == NULL) return;
    cout<<root->data<<endl;
    preOrder(root->left);
    preOrder(root->right);
}

vector<vector<int>> levelOrder(Node* root){
    vector<vector<int>> ans;
    if(root == NULL) return;
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        int size = q.size();
        vector<int> level;
        for(int i=0;i<size;i++){
            Node* temp = q.front();
            q.pop();
            if(temp->left != NULL)q.push(left);
            if(temp->right != NULL) q.push(right);
            level.push_back(temp->val);
        }
        ans.push_back(level);
    }
    return ans;
}
int main(){
    Node* root = NULL;

    root = buildTree(root);
    preOrder(root);
}