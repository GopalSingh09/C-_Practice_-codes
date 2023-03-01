#include<iostream.h>
#include<conio.h>
int main(){
int day, week, year;
clrscr();
cout<<"Enter number of days: ";
cin>>day;
year = day/365;
day =day%365;
week = day/7;
day = day%7;

cout<<year<<" years, "<<week<<" weeks, "<<day<<" days";
getch();
return 0;
}