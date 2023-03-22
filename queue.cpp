#include<iostream>
#include<stdlib.h>
using namespace std;
struct queue{
 int data;
 struct queue *next;
}*front = NULL, *rear = NULL, *ptr;
void insert(int n){
 if(front == NULL){
 struct queue* new_data = (struct queue*)malloc(sizeof(struct queue));
 new_data->data = n;
 new_data->next = NULL;
front = new_data;
 rear = new_data;
 cout<<"Data inserted\n";
 }
 else{
 struct queue* new_data = (struct queue*)malloc(sizeof(struct queue));
 new_data->data = n;
 new_data->next = NULL;
 rear->next = new_data;
 rear = new_data;
 cout<<"Data inserted\n";
 }}
void delet(){
 if(front == NULL){
 cout<<"queue is empty\n";
 }
 else{
 ptr = front;
 front = front->next;
 ptr->next = NULL;
 free(ptr);
 cout<<"Data deleted\n";
 }}
void display(){
 if(front == NULL){
 cout<<"Queue is empty\n";
 }
 else{
 ptr = front;
 while(ptr->next!=NULL){
 cout<<ptr->data<<"\t";
 ptr=ptr->next;
 }
 cout<<ptr->data<<"\n";
 }}
int main(){
 int ch, num;
 cout<<"1. Insertion\n2. Deletion\n3. Display\n4. Exit\n";
 do{
 cout<<"Enter choice: ";
 cin>>ch;
 switch(ch){
 case 1:{
 cout<<"Enter data: ";
 cin>>num;
 insert(num);
break;
 }
 case 2:{
 delet();
 break;
 }
 case 3:{
 display();
 break;
 }
 case 4:{
 exit(0);
 break;
 }
 default:{
 cout<<"Invalid input\n";
 break;
 } }
 }while(1);
 return 0;
}