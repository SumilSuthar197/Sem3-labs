#include<stdio.h>
int size=10;
int H[10]={0};

void displayTable(){
    for(int i=0;i<10;i++){
        printf("%d\n",H[i]);
    }
}

int hash (int key){
    return key%size;
}

int probe(int key){
    
    int index=hash(key);
    int i=0;
    while(H[(index+i)%size]!=0)
    i++;
    return (index+i)%size;
}

void insert(int key){
    int index=hash(key);
    if(H[index]!=0)
    index=probe(key);
    H[index]=key;
}

void search(int key){
    int index=hash(key);
    int i=0;
    while(H[(index+i)%size]!=key)
        i++;
    int pos=(index+i)%size;
    printf("Elemet found at position %d\n",pos);
}

void main(){
    insert(4);
    insert(14);
    insert(24);
    displayTable();
    printf("searching for 4\n");
    search(4);
    printf("searching for 14\n");
    search(14);

}
