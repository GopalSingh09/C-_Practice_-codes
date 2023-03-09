//Program to find HCF of two number
#include<iostream.h>
#include<conio.h>
int main(){
int a, b, div, rem;
clrscr();
cout<<"Enter the digits\na: ";
cin>>a;
cout<<"b: ";
cin>>b;
if(a>b){
while(rem!=0){
rem = a%b;
div = b;
a = div;
b = rem;
}
}
if(b>a){
while(rem!=0){
rem = b%a;
div = a;
b = div;
a = rem;
}
}
cout<<"HFC: "<<div;
getch();
return 0;
}