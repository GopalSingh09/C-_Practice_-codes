//Program to find the LCM of two number
#include<iostream.h>
#include<conio.h>
int main(){
int a, b, lcm;
clrscr();
cout<<"Enter the digits: ";
cout<<"\na: ";cin>>a;
cout<<"b: ";cin>>b;
if(a>b){
if(a%b == 0){
cout<<"LCM: "<<a;
}
else{
lcm = a*b;
cout<<"LCM: "<<lcm;
}
}
else if(b>a){
if(b%a==0){
cout<<"LCM: "<<b;
}
else{
lcm = a*b;
cout<<"LCM: "<<lcm;
}
}
getch();
return 0;
}