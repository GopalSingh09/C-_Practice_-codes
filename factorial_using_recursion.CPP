//Factorial using recursion
#include<iostream.h>
#include<conio.h>
int fac(int x, int y, int z){
cout<<y<<"x";
if(y == x){
return z;
}
z = z*y;
fac(x, y+1, z);
}
int main(){
int a, f, i = 1, sum = 1;
clrscr();
cout<<"Enter number: ";
cin>>a;
f = fac(a, i, sum);
cout<<"\nFactorial: "<<f;
getch();
return 0;
}