#include<iostream.h>
#include<conio.h>
int main(){
int year;
clrscr();
cout<<"Enter year: ";
cin>>year;
if(year%4 == 0){
cout<<year<<" is a leap year";
}
else{
cout<<"it is not a leap year";
}
getch();
return 0;
}