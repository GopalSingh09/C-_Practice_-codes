//Add two complex number passing object as argument
#include<iostream.h>
#include<conio.h>
class complex{
int real, img;
public:
void get_val(){
cout<<"real part: ";cin>>real;
cout<<"imaginary part: ";cin>>img;
}
void sum(complex c, complex c1){
real = c.real+c1.real;
img = c.img+c1.img;
}
void display(){
cout<<real<<"+"<<img<<"i";
}
};
int main(){
int r,i;
clrscr();
complex c,c1,c2;
cout<<"Enter first complex: \n";
c.get_val();
c.display();
cout<<"\nEnter second complex: \n";
c1.get_val();
c1.display();
cout<<"\nSum: \n";
c2.sum(c,c1);
c2.display();
getch();
return 0;
}