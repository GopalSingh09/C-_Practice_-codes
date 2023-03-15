#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
class list{
public:
virtual void store()=0;
virtual void retrieve() = 0;
};
class stack_class: public list{
public:
int a;
int stack[100], n, top;
void initialize(){
n=100;
top = -1;
}
void store(){
cout<<"Enter data: ";
cin>>a;
if(top>n-1){
cout<<"list is full\n";
}
else{
top++;
stack[top] = a;
}}
void retrieve(){
if(top>=0){
for(int i=top;i>=0;i--){
 cout<<stack[i]<<"\n";
 }}
else{
cout<<"List is empty\n";
}}};
class queue_class:public list{
public:
int queue[100],front, rear, max, b;
void initialize(){
front = -1;
rear = -1;
max = 100;
}
void store(){
cout<<"Enter data: ";
cin>>b;
if(rear==max-1){
cout<<"List is full\n";}
else{
if(front==-1)
front = 0;
rear = rear+1;
queue[rear]=b;
}}
void retrieve(){
if(front==-1){
cout<<"List it empty";}
else{
for(int i=front; i<= rear;i++){
cout<<queue[i]<<"\t";
}}}};
int main(){
int ch;
clrscr();
cout<<"Stack\n\t1.Store data\n\t2.Retrieve data\nQueue\n\t3.store\n\t4.Retrieve\n5.Exit\n";
cout<<"Enter choice: ";
cin>>ch;
stack_class s;
queue_class q;
s.initialize();
q.initialize();
do{
switch(ch){
case 1:{
s.store();
break;}
case 2:{
cout<<"\nStack is\n";
s.retrieve();
break;}
case 3:{
q.store();
break;}
case 4:{
cout<<"\nQueue is\n ";
q.retrieve();
break;}
case 5:{
cout<<"\nExiting...";
exit(0);
break;}
default :{
cout<<"\nInvalid input\n";
}}
cout<<"\nEnter choice: ";
cin>>ch;
}while(1);
getch();
return 0;
}