#include<iostream.h>
#include<conio.h>
//Find quotient and remainder
int main(){
int a,b,r, q;
clrscr();
cout<<"Enter dividend: ";
cin>>a;
cout<<"Enter divisor: ";
cin>>b;
q = a/b;
cout<<"Quotient: "<<q<<"\n";
r = a%b;
cout<<"Remainder: "<<r<<"\n";
getch();
return 0;
}