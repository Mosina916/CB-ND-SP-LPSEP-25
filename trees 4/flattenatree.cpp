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

node* inserinbst(node*root,int da){//300 13
    if(root==NULL){
        root=new node(da);
        return root;

    }
    else if(root->data<da){
        root->right=inserinbst(root->right,da);
        return root;
    }
    else{
        root->left=inserinbst(root->left,da);
        return root;

    }

}


node* buildbst(){


    int da;
    cin>>da;//8
    node*root=NULL;

    while(da!=-1){
    root=inserinbst(root,da);//300 
    cin>>da;//13
}


return root;



}
class ll{
public:
  node*h;
  node*t;
  ll(){
    h=NULL;
    t=NULL;
  }

};

ll buildllfromtree(node*root){
  ll p;

  // case 1 
  if(root==NULL){
    return p;
  }


  if(root->left==NULL and root->right==NULL){
      p.h=root;
      p.t=root;
      return p;
  }


  // case 2

   else if(root->left!=NULL and root->right==NULL){

    ll x=buildllfromtree(root->left);
    x.t->right=root;//link
    p.h=x.h;
    p.t=root;
    return p;
    
  }





  // case 3
   else if(root->left==NULL and root->right!=NULL){

    ll y=buildllfromtree(root->right);

    root->right=y.h;//link create 
    p.h=root;
    p.t=y.t;
    return p;


    
  }



  // case 4
  else{

     ll x=buildllfromtree(root->left);
      ll y=buildllfromtree(root->right);

      x.t->right=root;
      root->right=y.h;
      p.h=x.h;
      p.t=y.t;
      return p;


  }

}

void printll(node*head){

  while(head!=NULL){
   cout<<head->data<<"--> ";
   head=head->right;
 }

}


int main(){


  node*root=buildbst();
  ll o=buildllfromtree(root);


  printll(o.h);


   

    return 0;
}