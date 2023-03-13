//find square of float and integer
#include<iostream.h>
#include<conio.h>
class sq{
int a;
float b;
public:
void int_sq(int p){
a = p*p;
}
void float_sq(float q){
b = q*q;
}
void display(int p, float q){
cout<<p<<"^2: "<<a;
cout<<"\n"<<q<<"^2: "<<b;
}
};
int main(){
int x;
float y;
clrscr();
cout<<"Enter int value: ";cin>>x;
cout<<"Enter float value: ";cin>>y;
sq s;
s.int_sq(x);
s.float_sq(y);
cout<<"squares: \n";
s.display(x,y);
getch();
return 0;
}