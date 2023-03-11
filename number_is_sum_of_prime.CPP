//Progam to check that the number is the sum of prime number
#include<iostream.h>
#include<conio.h>
int main(){
int a=1,b,c = 0, p,t, d = 0, e = 0;
clrscr();
cout<<"Enter digit: ";
cin>>b;
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
for(int k = a;k<=i;k++){
p = k/2;
d = 0;
for(int l = 2;l<=p;l++){
if(k%l == 0){
d=1;
break;
}
}
if(d==0){
if((i+k)==b){
cout<<"Number is a sum of prime numbers: "<<i<<"+"<<k<<"\n";
e = 1;
}
}
}
}
}
if(e==0){
cout<<"Number is not a sum of prime numbers";
}
getch();
return 0;
}