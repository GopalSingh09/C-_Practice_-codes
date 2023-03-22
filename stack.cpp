#include<iostream>
#include<stdlib.h>
using namespace std;
struct stack{
 int data;
 struct stack *next;
}*top = NULL, *p;
void push(int n){
 struct stack* new_data = (struct stack*)malloc(sizeof(struct stack));
 new_data->data = n;
 new_data->next = top;
 top = new_data;
 cout<<"data pushed\n";
}
void pop(){
 p = top;
 if(top == NULL){
 cout<<"stack is underflow\n";
 }
 else{
 top = top->next;
 cout<<"Popped item is: "<<p->data<<"\n";
 free(p);
 }}
void peek(){
 if(top==NULL){
 cout<<"Stack is empty\n";
 }
 else{
 cout<<"Top is: "<<top->data<<"\n";
 }}
void traverse(){
 if(top==NULL){
 cout<<"Stack is empty\n";
 }
 else{
 p = top;
 while(p->next!=NULL){
 cout<<p->data<<"\n";
 p = p->next;
 }
 cout<<p->data<<"\n";
 }}
int main(){
 int ch, num;
 cout<<"1. Push\n2. Pop\n3. Peek\n4. Traverse\n5. Exit\n";
 do{
 cout<<"Enter choice: ";
 cin>>ch;
 switch(ch){
 case 1:{
 cout<<"Enter data: ";
 cin>>num;
 push(num);
 break;
 }
 case 2:{
 pop();
break;
 }
 case 3:{
 peek();
 break;
 }
 case 4:{
 traverse();
 break;
 }
 case 5:{
 exit(0);
 break;
 }
 default:{
 cout<<"Invalid input\n";
 break;
 }}
 }while(1);
 return 0;
}