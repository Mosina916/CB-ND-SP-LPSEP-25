#include<iostream>
#include<queue>
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




// // o(n^2)--o(n)
// int diameter(node*root){
//     if(root==NULL){
//         return 0;
//     }

//     int x=diameter(root->left);
//     int y=diameter(root->right);

//     int z=height(root->left)+height(root->right);
//     return max(x,max(y,z));



// }

void mirrortree(node*root){
    if(root==NULL){
        return;
    }



    swap(root->left,root->right);
    mirrortree(root->left);
    mirrortree(root->right);
}


void levelwiseprinttree(node*root){

    queue<node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
   node*x= q.front();//0x..
   q.pop();
   if(x==NULL){
    cout<<endl;
    if(!q.empty()){
        q.push(NULL);
    }

   }
   else{
    cout<<x->data<<" ";//8
    if(x->left!=NULL){
    q.push(x->left);
}

     if(x->right!=NULL){
    q.push(x->right);

   }
}

}






}



int main(){

    node*root=buildtree();//0x..300

    levelwiseprinttree(root);


    // mirrortree(root);


    return 0;
}