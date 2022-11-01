#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *lchild,*rchild;
}*root=NULL;

void insert(int val){
    struct node *t=root;
    struct node *r=NULL,*p;

    if(root==NULL){
        p=(struct node *)malloc(sizeof(struct node));
        p->data=val;
        p->lchild=NULL;
        p->rchild=NULL;
        root=p;
        return;
    }
    while(t!=NULL){
        r=t;
        if(val<t->data)
            t=t->lchild;
        else if(val>t->data)
            t=t->rchild;
        else
            return;
    }
    p=(struct node *)malloc(sizeof(struct node));
    p->data=val;
    p->lchild=NULL;
    p->rchild=NULL;
    
    if(val<r->data) r->lchild=p;
    else r->rchild=p;

}
void inorder(struct node *p){
    if(p){
    inorder(p->lchild);
    printf("%d  ",p->data);
    inorder(p->rchild);
    }
}

void main(){
    insert(3);
    insert(6);
    insert(2);
    insert(4);
    inorder(root);
}