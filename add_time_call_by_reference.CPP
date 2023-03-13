//Add two time using call by reference
#include<iostream.h>
#include<conio.h>
void sum(int &a1,int &b1, int &c1, int &a2,int &b2, int &c2, int &sa,int &sb,int &sc){
sc = c1+c2;
sb = sc%60;
sb = b1+b2+(sb/60);
sa = sb%60;
sa = a1+a2+(sb/60);
sb = sb%60;
sc = sc%60;
}
int main(){
int h1,m1,s1,h2,m2,s2,sh =0,sm =0 ,ss = 0;
clrscr();
cout<<"Enter time 1: \n";
cout<<"Hours: ";cin>>h1;
cout<<"Minutes: ";cin>>m1;
cout<<"Seconds: ";cin>>s1;
cout<<"Enter time 2:\n";
cout<<"Hours: ";cin>>h2;
cout<<"Minutes: ";cin>>m2;
cout<<"Seconds: ";cin>>s2;
sum(h1, m1,s1,h2,m2,s2,sh,sm,ss);
cout<<"sum of time: "<<sh<<":"<<sm<<":"<<ss;
getch();
return 0;
}