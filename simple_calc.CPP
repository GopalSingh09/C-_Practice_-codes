//A simple calculator
#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
int main(){
long double a, b,c = 0;
int ch;
clrscr();
cout<<"1. Add\n2.Sub\n3.Multi\n4.divide\n5.square\n6.clear\n7.exit\n";
do{
cout<<"\nEnter choice: ";
cin>>ch;
switch(ch){
case 1:{
if(c!=0){
cout<<"a: ";cin>>a;
c = c+a;
cout<<"Sum: "<<c;
}
else{
cout<<"a: ";cin>>a;
cout<<"b: ";cin>>b;
c = a+b;
cout<<"Sum: "<<c;
}
break;
}
case 2:{
if(c!=0){
cout<<"a: ";cin>>a;
c = c-a;
cout<<"difference: "<<c;
}
else{
cout<<"a: ";cin>>a;
cout<<"b: ";cin>>b;
c =a-b;
cout<<"Difference: "<<c;
}
break;
}
case 3:{
if(c!=0){
cout<<"a: ";
c = c*a;
}
else{
cout<<"a: ";cin>>a;
cout<<"b: ";cin>>b;
c = a*b;
}
cout<<"Multi: "<<c;
break;
}
case 4:{
if(c!=0){
cout<<"a: ";
c = c/a;
}
else{
cout<<"a: ";cin>>a;
cout<<"b: ";cin>>b;
c = a/b;
}
cout<<"divide: "<<c;
break;
}
case 5:{
cout<<"a: ";cin>>a;
cout<<"square: "<<a*a;
break;
}
case 6:{
a = 0;
b = 0;
c = 0;
cout<<"clear...";
break;
}
case 7:{
exit(0);
break;
}
default:{
cout<<"Invalid input\n";
break;
}
}
}while(1);
getch();
return 0;
}