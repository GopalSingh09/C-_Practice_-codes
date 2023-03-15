#include<iostream>
#include<stdlib.h>
using namespace std;
int area(int a , int b){
 int area;
 area = a*b;
 cout<<"Area: "<<area<<"\n";
 return 0;
}
float area(float a){
 float area;
 area = 3.14 * (a*a);
 cout<<"Area: "<<area<<"\n";
 return 0;
}
float area(float a , float b){
 float area;
 area = 0.5 * a*b;
 cout<<"Area: "<<area<<"\n";
 return 0;
}
int main(){
int ch ,l2, b;
float r, l1,h;
cout<<"1. Circle\t2. Triangle\t3. Rectangle\t4. Exit\n";
do{
cout<<"Enter choice: ";
cin>>ch;
switch(ch){
case 1: {
 cout<<"Enter radius: ";
 cin>>r;
 area(r);
 break; }
case 2: {
 cout<<"Enter length: ";cin>>l1;
 cout<<"Enter height: ";cin>>h;
 area(l1,h);
 break; }
case 3: {
 cout<<"Enter length: ";cin>>l2;
 cout<<"Enter height: ";cin>>b;
 area(l2,b);
 break; }
case 4: {
 cout<<"Exiting...";
 exit(0);
 break; }
default: {
 cout<<"Invalid input
\n";
 break; }
}
}while(1);
return 0; }