#include<iostream.h>
#include<conio.h>
//Raise any number to power of n
int func(int n,int a){
a = n*a;
return a;
}
int main(){
int num, pow, temp = 1;
clrscr();
cout<<"Enter number: ";cin>>num;
cout<<"Enter power: ";cin>>pow;
for(int i = 0;i<pow;i++){
temp = func(num, temp);
}
cout<<"Result: "<<temp;
getch();
return 0;
}