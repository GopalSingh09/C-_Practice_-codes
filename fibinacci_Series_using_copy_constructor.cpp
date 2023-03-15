#include<iostream.h>
#include<conio.h>
class fib{
public:
int f,f1,temp;
fib(){
f=0;
f1=1;
temp = f+f1; }
fib(fib &t){
f = t.f;
f1 = t.f1;
temp = t.temp; }
void increase(){
f = f1;
f1 = temp;
temp = f+f1; }
void display(){
cout<<temp<<"
\t";
}};
int main() {
fib fb;
int n;
clrscr();
cout<<"Enter the length of series: ";
cin>>n;
cout<<"Fibonacci series:
\n";
for(int i=1; i<=n;i++){
fb.display();
fb.increase(); }
getch();
retu