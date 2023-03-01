#include<iostream.h>
#include<conio.h>
//Swap without using third variable:

int main(){
int a, b;
clrscr();
cout<<"Enter A: ";cin>>a;
cout<<"Enter B: ";cin>>b;
cout<<"Before swap\n";
cout<<"a: "<<a<<"\n";
cout<<"b: "<<b;
if(a<b){
b = b-a;
a = a+b;
b = a-b;
}
else if(a>b){
a = a-b;
b = b+a;
a = b-a;
}
cout<<"\nAfter swap\n";
cout<<"a: "<<a<<"\n";
cout<<"b: "<<b;
getch();
return 0;
}