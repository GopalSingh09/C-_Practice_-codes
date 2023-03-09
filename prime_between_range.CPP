//progra to find the prime numbers between two ranges
#include<iostream.h>
#include<conio.h>
int main(){
int a,b,p, t, c = 0;
clrscr();
cout<<"Enter starting range: ";cin>>a;
cout<<"Enter ending range: ";cin>>b;
for(int i = a;i<=b;i++){
t = i/2;
c = 0;
for(int j = 2;j<=t;j++){
if(i%j == 0){
c=1;
break;
}
}
if(c==0){
cout<<i<<"\t";
}
}
getch();
return 0;
}
