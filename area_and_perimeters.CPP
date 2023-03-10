//Program to find area and perimeters
#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
int main(){
int ch;
double rl,rb, ra, ss, sa, rw, pr;
float r, ac, th, tb, at;
clrscr();
cout<<"1. Area of circle\n2. Area of triangle\n3.Area of rectangle\n4.Area of square\n5.Perimeter of rectangle\n6.Exit\n";
do{
cout<<"\nEnter choice: ";cin>>ch;
switch(ch){
case 1: {
cout<<"Enter radius of the circle: ";
cin>>r;
ac = 3.14*(r*r);
cout<<"Area of cirlce: "<<ac;
break;
}
case 2: {
cout<<"Enter height of triangle: ";cin>>th;
cout<<"Enter breadth of triangle: ";cin>>tb;
at = (th*tb)/2;
cout<<"Area of triangle: "<<at;
break;
}
case 3: {
cout<<"Enter length: ";cin>>rl;
cout<<"Enter breadth: ";cin>>rb;
ra = rl*rb;
cout<<"Area of rectangle: "<<ra;

break;
}
case 4: {
cout<<"Enter side: ";cin>>ss;
sa = ss*ss;
cout<<"Area of circle: "<<sa;
break;
}
case 5:{
cout<<"Enter length: ";cin>>rl;
cout<<"Enter width: ";cin>>rw;
pr = 2*(rl+rw);
cout<<"Perimeter: "<<pr;
break;
}
case 6:{
exit(0);
break;
}
default: {
cout<<"Invalid choice: ";
break;
}
}
}while(1);
getch();
return 0;
}