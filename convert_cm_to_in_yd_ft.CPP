#include<iostream.h>
#include<conio.h>
//convert cm to inches-yard,feet
int main(){
double cm,in,yd,ft;
char c;
clrscr();
cout<<"value you have? cm or in: ";
cin>>c;
if(c == 'c'){
cout<<"Enter cm: ";
cin>>cm;
in = cm/2.54;
cout<<"inches: "<<in<<"\n";
}
else if(c == 'i'){
cout<<"Enter inches: ";
cin>>in;
}
ft = in/12;
yd = in/36;
cout<<"feet: "<<ft;
cout<<"\nyard: "<<yd;
getch();
return 0;
}