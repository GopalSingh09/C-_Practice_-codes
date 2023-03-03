//Find number of digits in input value
#include<iostream.h>
#include<conio.h>
int main(){
long int a, b, no = 0;
clrscr();
cout<<"enter the digit: ";
cin>>a;
b = a;
while(b>0){
b = b/10;
no++;
}
cout<<"number of digits: "<<no;
getch();
return 0;
}