//program to find the sum of square of first n natural number
#include<iostream.h>
#include<conio.h>
long int func(long int x){
return x*x;
}
int main(){
int n ;
long int sum = 0;
clrscr();
cout<<"Enter the digit: ";
cin>>n;
for(int i = 1;i<=n;i++){
sum = sum+func(i);
}
cout<<"Sum is: "<<sum;
getch();
return 0;
}