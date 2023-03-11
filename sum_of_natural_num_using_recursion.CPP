//sum of natural number using recursion
#include<iostream.h>
#include<conio.h>
int nn(int x, int y, int z){
if(z > x){
return y;
}
y= y+z;
nn(x,y,z+1);
}
int main(){
int a, sum = 0, snn, i = 1;
clrscr();
cout<<"Enter the number: ";
cin>>a;
snn = nn(a, sum, i);
cout<<"Sum of the natural number is : "<<snn;
getch();
return 0;
}