//Palindrome or not
#include<iostream.h>
#include<conio.h>
int main(){
int a, rev = 0,r,n;
clrscr();
cout<<"Enter number: ";
cin>>n;
a = n;
while(a>0){
r = a%10;
rev = rev*10+r;
a = a/10;
}
if(n == rev){
cout<<"Number is a palindrome";
}
else{
cout<<"Number is not a palindrome";
}
getch();
return 0;
}