//Finding power using recursion
#include<iostream.h>
#include<conio.h>
int powe(int a,int b, int c, int d){
if(c==b){
return a;
}
a = a*d;
powe(a, b, c+1,d);
}

int main(){
int base, power, ans, i = 1, t;
clrscr();
cout<<"Enter base: ";cin>>base;
cout<<"Enter power: ";cin>>power;
t = base;
ans = powe(base, power,i, t);
cout<<base<<"^"<<power<<": "<<ans;
getch();
return 0;
}