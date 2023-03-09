//program to find the sum of first n natural numbers
#include<iostream.h>
#include<conio.h>
int main(){
int n, a = 1,d = 1, s;
clrscr();
cout<<"Enter the number: ";
cin>>n;
s = (n*((2*a)+(n-1)*d))/2;
cout<<"sum is: "<<s;
getch();
return 0;
}