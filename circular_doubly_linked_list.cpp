#include<iostream>
#include<string>
#include<stdlib.h>
using namespace std;
struct employee{
 int id;
 string name;
 struct employee *next;
 struct employee *prev;
} *start = NULL, *head = NULL, *ptr;
void insert(int i, string n){
 if(start == NULL){
 struct employee* new_data = (struct employee*)malloc(sizeof(struct employee));
 new_data->id = i;
 new_data->name = n;
 new_data->next = NULL;
 new_data->prev = NULL;
 start = new_data;
 head = new_data;
cout<<"Node inserted\n";
 }
 else{
 struct employee* new_data = (struct employee*)malloc(sizeof(struct employee));
 new_data->id = i;
 new_data->name = n;
 new_data->prev = NULL;
 new_data->next = start;
 start->prev = new_data;
 start = new_data;
 cout<<"Node inserted\n";
 }}
void delet(){
 if(start == NULL){
 cout<<"List is empty\n";
 }
 else{
 if(start != head){
 ptr = head->prev;
 ptr->next = NULL;
 head->prev = NULL;
 cout<<"Deleted employee details of: "<<head->name<<"\n";
 head = ptr;
 }
 else{
 cout<<"Last item of list is deleted: "<<head->name<<"\n";
 start = NULL;
 head = start;
 }}}
void display(){
 if(start == NULL){
 cout<<"There is no details to show as list is empty\n";
 }
 else{
 int a=0;
 ptr = start;
 while(ptr->next!= NULL){
 cout<<"Node"<<a<<". "<<ptr->id<<"-"<<ptr->name<<"\n";
 ptr = ptr->next;
 a++;
 }
 cout<<"Node"<<a<<". "<<ptr->id<<"-"<<ptr->name<<"\n";
 }}
int main(){
 int ch, i;
 string n;
cout<<"1. Insertion\n2. Deletion\n3. Display\n4. Exit\n";
 do{
 cout<<"Enter choice: ";
 cin>>ch;
 switch(ch){
 case 1: {
 cout<<"Enter employee id: ";
 cin>>i;
 cout<<"Enter employee name: ";
 cin>>n;
 insert(i, n);
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
 }}
 }while(1);
return 0;
}