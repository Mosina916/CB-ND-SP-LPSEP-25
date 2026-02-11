#include<iostream>
using namespace std;

class node{
public:
    int data;
    node*left;
    node*right;
    node(int d){
        data=d;
        left=NULL;
        right=NULL;
    }
};

node* buildtree(){

    int d;
    cin>>d;//8
    if(d==(-10)){
        return NULL;
    }

    node*root=new node(d);
    root->left=buildtree();
    root->right=buildtree();
    return root;
}

void preorder(node*root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);

}
void inorder(node*root){
    if(root==NULL){
        return;
    }

    inorder(root->left);
    cout<<root->data<<" ";
   inorder(root->right);

}

void postorder(node*root){
    if(root==NULL){
        return;
    }

    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";

}


// int countnodes(node*root){
//     if(root==NULL)P{
//         return 0;
//     }

//     return countnodes(root->left)+countnodes(root->right)+1;

// }

int countnodes(node*root){
    if(root==NULL){
        return 0;
    }

    int x=countnodes(root->left);
    int y=countnodes(root->right);
    return x+y+1;

}




int sumnodes(node*root){
    if(root==NULL){
        return 0;
    }

    int x=sumnodes(root->left);
    int y=sumnodes(root->right);
    return x+y+root->data;

}

int height(node*root){

    if(root==NULL){
        return 0;
    }

    return 1+max(height(root->left),height(root->right));
}


bool searchintree(node*root,int key){
    if(root==NULL){
        return false;
    }


    if(root->data==key||searchintree(root->left,key)||searchintree(root->right,key)){
        return true;
    }
    return false;

}

// o(n^2)--o(n)
int diameter(node*root){
    if(root==NULL){
        return 0;
    }

    int x=diameter(root->left);
    int y=diameter(root->right);

    int z=height(root->left)+height(root->right);
    return max(x,max(y,z));



}
int main(){

    node*root=buildtree();//0x..300


    cout<<diameter(root)<<endl;

    // cout<<"count of nodes is" <<countnodes(root)<<endl;

    //  cout<<"sum of nodes is" <<sumnodes(root)<<endl;
   
    //  preorder(root);
    //  cout<<endl;
    // inorder(root);
    // cout<<endl;
    //  postorder(root);
    //  cout<<endl;



    return 0;
}