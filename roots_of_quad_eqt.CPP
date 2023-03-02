#include<iostream.h>
#include<conio.h>
#include<math.h>
//to find the roots of quadratic equation
int main(){
double a,b,c,d,r1,r2, img;
clrscr();
cout<<"Enter coefficient \na: ";
cin>>a;
cout<<"b: ";
cin>>b;
cout<<"c: ";
cin>>c;
cout<<"quadratic equation: ax^2+bx+c\n";
d = (b*b)-(4*a*c);
cout<<"d: "<<d<<"\n";
if(d>0){
cout<<"Roots are real and distinct\n";
d = sqrt(d);
r1 = (-b-d)/(2*a);
r2 = (-b+d)/(2*a);
cout<<"Roots are: \n";
cout<<"r1: "<<r1;
cout<<"\nr2: "<<r2;
}
else if(d=0){
d = sqrt(d);
cout<<"Roots are real and equal\n";
r1 = r2 = -b/(2*a);
cout<<"r1: "<<r1;
cout<<"\nr2: "<<r2;
}
else if(d<0){
d = sqrt(d);
cout<<"Roots are imaginary and complex\n";
r1 = -b/(2*a);
img = d/(2*a);
cout<<"r1: "<<r1<<"+i("<<img<<")\n";
cout<<"r2: "<<r1<<"-i("<<img<<")\n";
}
getch();
return 0;
}