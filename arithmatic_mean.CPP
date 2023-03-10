//program Arithmatic mean
#include<iostream.h>
#include<conio.h>
int main(){
long double n=1,sum = 0,am, i = 0;
clrscr();
cout<<"To end the input values enter 0\n";
while(n!=0){
cout<<"Enter number: ";
cin>>n;
sum = sum+n;
i++;
}
am = sum/(i-1);
cout<<"Sum: "<<sum;
cout<<"\nNumber of values: "<<i-1;
cout<<"\nArithmetic mean of above numbers is: "<<am;
getch();
return 0;
}