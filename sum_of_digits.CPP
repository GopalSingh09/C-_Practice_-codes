//Find sum of digits
#include<iostream.h>
#include<conio.h>
int main(){
long int a, r, sum = 0;
clrscr();
cout<<"Enter the number: ";
cin>>a;
while(a>0){
r = a%10;
sum = sum+r;
a = a/10;
}
cout<<"Sum: "<<sum;
getch();
return 0;
}