//largest among three
#include<iostream.h>
#include<conio.h>
int main(){
int a, b,c;
clrscr();
cout<<"A: ";cin>>a;
cout<<"B: ";cin>>b;
cout<<"C: ";cin>>c;
if(a>b&&a>c){
cout<<"A is largest among all";
if(b>c){
cout<<"\nC<B<A";
}
else{
cout<<"\nB<C<A";
}
}
else if(b>c&&b>a){
cout<<"B is largest among all";
if(c>a){
cout<<"\nA<C<B";
}
else{
cout<<"\nC<A<B";
}
}
else if(c>b&&c>a){
cout<<"C is largest among all";
if(a>b){
cout<<"\nB<A<C";
}
else{
cout<<"\nA<B<C";
}
}
else if(a==b&&b==c){
cout<<"all are equal";
cout<<"\nA=B=C";
}


getch();
return 0;
}