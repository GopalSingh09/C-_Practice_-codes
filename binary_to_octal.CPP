//program to convert binary to octal
#include<iostream.h>
#include<conio.h>
#include<math.h>
int dec(int a,int b,int c){
int val;
cout<<a<<" "<<b<<" "<<c<<"\n";
val = a*pow(2,0)+b*pow(2,1)+c*pow(2,2);
return val;
}
int main(){
long int b,t;
int o, l=0, r, ta[100], i=0, octal[100], k = 0;
clrscr();
cout<<"Enter the binary digit: ";
cin>>b;
t = b;
while(t>0){
t = t/10;
l++;
}
while(b>0){
r = b%10;
b = b/10;
ta[i] = r;
i++;
}
for(int j = 0;j<i;j=j+3){
octal[k] = dec(ta[j], ta[j+1],ta[j+2]);
k++;
}
cout<<"Equivalent octal number is: ";
for(int p = 0;p<k;p++){
cout<<octal[p];
}
getch();
return 0;
}