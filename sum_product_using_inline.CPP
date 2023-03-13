//Sum and product of 5 numbers using inline function
#include<iostream.h>
#include<conio.h>

inline sum(int x, int y, int z, int p, int q){
return x+y+z+p+q;
}
inline pro(int x, int y, int z, int p, int q){
return x*y*z*p*q;
}

int main(){
int a,b,c,d,e, s, p;
cout<<"A: ";cin>>a;
cout<<"B: ";cin>>b;
cout<<"C: ";cin>>c;
cout<<"D: ";cin>>d;
cout<<"D: ";cin>>e;
s = sum(a,b,c,d,e);
cout<<"Sum: "<<s;
p = pro(a,b,c,d,e);
cout<<"\nproduct: "<<p;
getch();
return 0;
}