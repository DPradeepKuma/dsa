//#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//creating node
struct node{
    int value;
    struct node *next;
};
//print the Linkedlist vlaue
void printLinkedList(struct node *p){
    while (p!=NULL){
        cout<<p->value<<endl;
        p=p->next;

    }
}
int main(){
    //initilazation node
    struct node *node;
    struct node *one=NULL;
    struct node *two=NULL;
    

}
