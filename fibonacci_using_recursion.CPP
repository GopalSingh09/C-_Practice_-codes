//Program to generate fibonacci series using recursion
#include<iostream.h>
#include<conio.h>
int fib(int x, int y, int z,int p,int q){
if(y == x){
return 0;
}
q = z+p;
cout<<q<<"\t";
z = p;
p = q;
fib(x, y+1, z,p,q);
}

int main(){
int a, l = 0, b = 0,c = 1,d;
clrscr();
cout<<"Enter length of the series: ";cin>>a;
fib(a,l, b,c,d);
getch();
return 0;
}