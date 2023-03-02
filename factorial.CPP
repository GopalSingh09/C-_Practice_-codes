//Find factorial of a number
#include<iostream.h>
#include<conio.h>
int main(){
int a, sum=1;
clrscr();
cout<<"Enter number: ";
cin>>a;
for(int i = 1;i<=a;i++){
cout<<i<<"x";
sum = sum*i;
}
cout<<"\nFactorial is: "<<sum;
getch();
return 0;
}