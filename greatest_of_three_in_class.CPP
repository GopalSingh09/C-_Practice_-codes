//greatest between three number using class
#include<iostream.h>
#include<conio.h>
class great{
int a,b,c;
public:
void get_val(){
cout<<"A: ";cin>>a;
cout<<"B: ";cin>>b;
cout<<"C: ";cin>>c;
}
void solve(){
if(a>b&&b>c){
cout<<a<<">"<<b<<">"<<c;
}
else if(a>c&&c>b){
cout<<a<<">"<<c<<">"<<b;
}
else if(b>a&&a>c){
cout<<b<<">"<<a<<">"<<c;
}
else if(b>c&&c>a){
cout<<b<<">"<<c<<">"<<a;
}
else if(c>a&&a>b){
cout<<c<<">"<<a<<">"<<b;
}
else if(c>b&&b>a){
cout<<c<<">"<<b<<">"<<a;
}
else if(a==b&&a>c){
cout<<a<<"="<<b<<">"<<c;
}
else if(a==b&&a<c){
cout<<c<<">"<<a<<"="<<b;
}
else if(b==c&&c>a){
cout<<b<<"="<<c<<">"<<a;
}
else if(b==c&&c<a){
cout<<a<<">"<<c<<"="<<b;
}
else if(a==c&&a>b){
cout<<a<<"="<<c<<">"<<b;
}
else if(a==c&&a<b){
cout<<b<<">"<<a<<"="<<c;
}
else if(a==b&&b==c){
cout<<a<<"="<<b<<"="<<c;
}
}
};
int main(){
clrscr();
great g;
g.get_val();
g.solve();
getch();
return 0;
}