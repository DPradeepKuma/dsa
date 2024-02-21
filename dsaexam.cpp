#include<bits/stdc++.h>
using namespace std;
struct node{
    for(int i=0;i<n;i++){
        int value;
        int rollno;
        float percentage;
        struct node *next;
    }
    //struct node *next;
};
void printLinkedList(struct node *p,struct node *q,struct node *perc){
    while(p!=NULL,q!=NULL,perc!=NULL){
        cout<<"Enter the value"<<p->value<<endl;
        cout<<"Enter the roll number"<<q->rollno<<endl;
        cout<<"Enter the percentage"<<perc->percentage<<endl;
        p=p->next;

    }
}
int main(){
    string name;
    int n,rollno,percentage;
    

    cin>>n;
    
  /*  for(int i=0;i<n;i++){
        printLinkedList()
    }*/
    struct node *node;
    struct node *one=NULL;
    struct node *two=NULL;





}