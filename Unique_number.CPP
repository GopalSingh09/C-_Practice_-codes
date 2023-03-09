//program to the number is unique or not
#include<iostream.h>
#include<conio.h>
int main(){
long int a, c, z;
int b[11], temp, l=0, r, p = 0;
clrscr();
cout<<"Enter digit: ";
cin>>a;
z = c = a;
while(c>0){
c = c/10;
l++;
}
while(z>0){
for(int i = 0;i<l;i++){
r = z%10;
z = z/10;
b[i] = r;
}
}
for(int j = 0; j<l;j++){
for(int k =j+1;k<l;k++){
if(b[j]==b[k]){
cout<<"Number is not unique";
p = 1;
break;
}
}
if(p == 1){
break;
}
}
if(p == 0){
cout<<"Number is unique";
}
getch();
return 0;
}