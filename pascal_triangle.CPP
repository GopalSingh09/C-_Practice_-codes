//pascal triangle
#include<iostream.h>
#include<conio.h>
long fac(int b){
long f = 1;
for(long i = 1;i<=b;i++){
f = f*i;
}
return f;
}
int main(){
long a;
clrscr();
cout<<"enter the number of lines: ";
cin>>a;
for(long i = 0;i<a;++i){
for(long j = a;j>i;j--){
//Loop to print spaces before each row
cout<<" ";
}
for(long k = 0;k<=i;++k){
cout<<fac(i)/(fac(i-k)*fac(k))<<"  ";
}
cout<<"\n";
}
getch();
return 0;
}