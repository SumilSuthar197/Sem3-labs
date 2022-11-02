#include<stdio.h>
#include<stdlib.h>
int n;
struct node {
    int data;
    struct node *next;
}*front=NULL,*rear=NULL;

void enqueue(int x){
    struct node *ptr;
    ptr=(struct node*)malloc(sizeof(struct node));
    if(ptr==NULL)
    {
        printf("queue is full");
    }
    else{
    ptr->data=x;
    ptr->next=NULL;
    if(front==NULL)
    {
        front=rear=ptr;
    }
    else{
        rear->next=ptr;
        rear=ptr;
    }
    }
}

int dequeue(){
    struct node *ptr;
    int x=-1;
    if(front==NULL){
        printf("Queue is empty");
    }
    else{
    x=front->data;
    ptr=front;
    front=front->next;
    free(ptr);}
    return x;
}

int isEmpty(){
    return front==NULL;
}

void DFS(int G[][7],int start,int n){
    static int visited[7]={0};
    int j;
    if(visited[start]==0)
    {
        printf("%d ",start);        
        visited[start]=1;
        for(j=0;j<n;j++)        
        {
            if(G[start][j]==1 && visited[j]==0)
            DFS(G,j,n);        
        }    
    }
}

void BFS(int A[7][7],int start,int n){
    int i=start;
    int j;
    int visited[7]={0};
    printf("%d ",i);
    visited[i]=1;
    enqueue(i);
    while(!isEmpty()){
        i=dequeue();
        for(j=0;j<n;j++)
        {
            if( (A[i][j]==1)&&(visited[j]==0))
            {
                printf("%d ",j);
                visited[j]=1;
                enqueue(j);
            }
        }
    }
}
void main(){
    int n=7;
    int A[7][7]={
{0, 1, 0, 1, 0, 0, 0}, 
{0, 0, 1, 0, 0, 1, 0},
{0, 0, 0, 0, 1, 0, 1},
{0, 0, 0, 0, 0, 1, 0},
{0, 1, 0, 0, 0, 1, 0},
{1, 0, 0, 0, 0, 0, 0},
{0, 0, 0, 0, 1, 0, 0}};

    BFS(A,0,n);
    printf("\n");
    DFS(A,1,n);
    
}