#include<iostream.h>
#include<conio.h>
//finding the size of datatypes in c++
int main(){
int a;
char b;
float c;
double d;
long double e;
clrscr();
cout<<"size of int: "<<sizeof(a)<<"\n";
cout<<"size of char: "<<sizeof(b)<<"\n";
cout<<"size of float: "<<sizeof(c)<<"\n";
cout<<"size of double: "<<sizeof(d)<<"\n";
cout<<"size of long double: "<<sizeof(e)<<"\n";
getch();
return 0;
}