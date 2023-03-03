//Fibonacci series
#include<iostream.h>
#include<conio.h>
int main(){
int a = 0, b = 1, c = 1, n;
clrscr();
cout<<"enter the length of the seires: ";
cin>>n;
cout<<"series: \n";
cout<<a<<"\t";
cout<<b<<"\t";
for(int i = 0;i<n;i++){
cout<<c<<"\t";
a = b;
b = c;
c = a+b;
}
getch();
return 0;
}