//program to convert binary to decimal
#include<iostream.h>
#include<conio.h>
#include<math.h>
int main(){
long int b, t;
int sum = 0, l = 0, a[100], r, j = 0;
clrscr();
cout<<"Enter binary code: ";
cin>>b;
t = b;
while(t>0){
t = t/10;
l++;
}
while(b>0){
r = b%10;
b = b/10;
a[j] = r;
j++;
}
for(int i = 0;i<l;i++){
sum = sum + (a[i]*pow(2,i));
}
cout<<"Decimal equivalent is: "<<sum;
getch();
return 0;
}