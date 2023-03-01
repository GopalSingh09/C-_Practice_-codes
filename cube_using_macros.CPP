#include<iostream.h>
#include<conio.h>
#define cube(x) (x*x*x);
//find cube of a number using macros
int main(){
int a, cb;
clrscr();
cout<<"enter number: ";
cin>>a;
cb = cube(a);
cout<<"cube: "<<cb;
getch();
return 0;
}