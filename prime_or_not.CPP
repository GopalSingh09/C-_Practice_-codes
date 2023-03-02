//Find prime or not
#include<iostream.h>
#include<conio.h>
int main(){
int a;
clrscr();
cout<<"Enter any positive number: ";
cin>>a;
if(a==1||a==2){
cout<<"Number is prime";
}
else if(a>2){
for(int i = 2;i<a;i++){
if(a%i==0){
cout<<"Number is not a prime";
break;
}
}
if(a==i){
cout<<"Entered number is a prime number";
}
}
getch();
return 0;
}