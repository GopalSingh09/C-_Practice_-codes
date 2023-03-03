//Table of any number
#include<iostream.h>
#include<conio.h>
int main(){
int a;
clrscr();
cout<<"Enter number: ";
cin>>a;
cout<<"Table: \n";
for(int i = 1;i<=10;i++){
cout<<a*i<<"\n";
}
getch();
return 0;
}