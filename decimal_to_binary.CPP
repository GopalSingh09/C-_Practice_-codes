//Program to convert decimal number to binary
#include<iostream.h>
#include<conio.h>
int main(){
int d,b[100], res = 0, rem = 0, i = 0;
clrscr();
cout<<"Enter decimal number: ";
cin>>d;
while(d>=2){
res = d/2;
rem = d%2;
d = res;
b[i] = rem;
if(res == 1){
b[i+1] = 1;
}
i++;
}
cout<<"Binary equivalent is: ";
for(int j = i; j>=0;j--){
cout<<b[j];
}
getch();
return 0;
}