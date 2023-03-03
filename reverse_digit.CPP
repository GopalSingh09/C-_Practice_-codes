//Reversing a digit
#include<iostream.h>
#include<conio.h>
int main(){
long int a, rev = 0,r;
clrscr();
cout<<"Enter digit: ";
cin>>a;

while(a>0){
r = a%10;

rev =rev*10+r;
a = a/10;
}
//cout<<rev;
getch();
return 0;
}