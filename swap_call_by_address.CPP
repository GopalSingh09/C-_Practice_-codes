//program to swapp using call by address
#include<iostream.h>
#include<conio.h>
void swap(int *x, int *y){
int *temp;
*temp = *x;
*x = *y;
*y = *temp;
}
int main(){
int a, b;
clrscr();
cout<<"Enter digits: \n";
cout<<"A: ";cin>>a;
cout<<"B: ";cin>>b;
swap(&a,&b);
cout<<"After calling funciton: \n";
cout<<"A: "<<a;
cout<<"\nB: " <<b;


getch();
return 0;
}