//program to find the perfect number
#include<iostream.h>
#include<conio.h>
int main(){
int a, f[100], t = 1, j = 0;
clrscr();
cout<<"Enter the number: ";
cin>>a;
for(int i = 2;i<a;i++){
if(a%i == 0){
f[j] = i;
j++;
}
}
for(int k = 0;k<j;k++){
t = t+f[k];
}
cout<<"sum of all factor excluding itself: "<<t<<"\n";
if(t == a){
cout<<"Number is perfect";
}
else{
cout<<"Number is not perfect";
}
getch();
return 0;
}