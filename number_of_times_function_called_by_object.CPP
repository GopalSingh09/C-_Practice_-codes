//find how many times function called by object
#include<iostream.h>
#include<conio.h>
class hello{
public:
int a;
void get(){
a = 0;
}
void count(){
a++;
cout<<"object called "<<a<<" times\n";
}
};
int main(){
char ch;
clrscr();
hello h;
h.get();
for(int i = 1; i<10;i++){
h.count();
if(i==5){
break;
}
}
getch();
return 0;
}