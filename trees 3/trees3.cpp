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


bool searchinbst(node*root,int key){
    if(root==NULL){
        return false;
    }
    if(root->data==key){
        return true;
    }
    else if(root->data<key){
        return searchinbst(root->right,key);
    }
    else {
        return searchinbst(root->left,key);
    }
}


void printinrangek1k2(node*root,int k1,int k2){

    if(root==NULL){

        return;
    }

    // lst
    printinrangek1k2(root->left,k1,k2);//st
    if(root->data>=k1 and root->data<=k2){
        cout<<root->data<<" ";
    }
    printinrangek1k2(root->right,k1,k2);//rst


}
// check given tree bst or not

// op1 -->inorder-->array stiore-->check sorted hai ya nahi

// o(n)
bool checkbst(node*root,int mi=INT_MIN,int ma=INT_MAX){
    if(root==NULL){
        return true;
    }

    if((root->data>=mi and root->data<=ma) and checkbst(root->left,mi,root->data) and checkbst(root->right,root->data+1,ma)){
    return true;
}
return false;
}


// isbal(node*root){


//     int x=height(root->left);
//     int y=height(root->right);

//     if(abs(x-y)<=1 and isbal(root->left) and isbal(root-right)){
//         return trye
//     }

//     return false

// }



class G{
public:
  int h;
  bool isb;
 // G(){

 // }
};


G fastisbal(node*root){
  G a;//1
  if(root==NULL){
    a.h=0;
    a.isb=true;
    return a;

  }

  G x=fastisbal(root->left);//2
  G y=fastisbal(root->right);//3
  a.h=max(x.h,y.h)+1;//4

 if(abs(x.h-y.h)<=1 and x.isb and y.isb){
    a.isb=true;
 }
 else{
  a.isb=false;
}

   return a;//6

}


node* arraytobst(int *arr,int s,int e){

    if(s>e){
        return NULL;

    }



    int mid=(s+e)/2;
   node*root=new node(arr[mid]);
   root->left=arraytobst(arr,s,mid-1);

   root->right=arraytobst(arr,mid+1,e);

   return root;
}
int preo[]={8,3,1,6,4,7,10,14,13};
int ino[]={1,3,4,6,7,8,10,13,14};

int i=0;

node* bildtreeusingpreandin(int s,int e){
    if(s>e){
        return NULL;
    }
        int ele=preo[i];//8
        i++;
        int k;
        for(int j=s;j<=e;j++){
            if(ino[j]==ele){
                k=j;
                // break;

            }
        }
        node*root=new node(ele);
        root->left= bildtreeusingpreandin(s,k-1);
         root->right= bildtreeusingpreandin(k+1,e);
         return root;
}

int main(){


    int n=sizeof(preo)/sizeof(int);//9

    node*root=bildtreeusingpreandin(0,n-1);

   //  int arr[]={1,3,4,7,9,12,15};

   //  int n=sizeof(arr)/sizeof(int);

   // node*root= arraytobst(arr,0,n-1);
   levelwiseprinttree(root);




   //  node*root=buildbst();//0x..300

   //  levelwiseprinttree(root);

   // G t =fastisbal(root);

   // cout<<t.isb<<endl;
   // cout<<t.h<<endl;


    // cout<<searchinbst(root,19)<<endl;


    // printinrangek1k2(root,3,10);

    // cout<<endl;

    // cout<<checkbst(root)<<endl;


    // mirrortree(root);


    return 0;
}