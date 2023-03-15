#include <iostream>
using namespace std;
template <typename T>
T swap_data(T &x, T &y)
{
T t;
t = x;
x = y;
y = t;
}
int main()
{
char c1, c2;
cout<<"Enter char 1: ";cin>>c1;
cout<<"Enter char 2: ";cin>>c2;
swap_data(c1, c2);
cout<<"\nchar after swapping: ";
cout<<"\nchar 1: "<<c1<<"\nChar 2: "<<c2<<"\n";
int a,b;
cout<<"Enter num 1: ";cin>>a;
cout<<"Enter num 2: ";cin>>b;
swap_data(a, b);
cout<<"\nnumbers after swapping: ";
cout<<"\nnum 1: "<<a<<"\nnum 2: "<<b<<"\n";
float f1,f2;
cout<<"Enter float val 1: ";cin>>f1;
cout<<"Enter float val 2: ";cin>>f2;
swap_data(f1, f2);
cout<<"\nfloat values after swapping: ";
cout<<"\nval 1: "<<f1<<"\nval 2: "<<f2<<"\n";
return 0;
}
