//Constructor overloading
#include<iostream.h>
#include<conio.h>
class application{
int ram;
int hd_card;
public:
application(){
ram = 1;
hd_card = 1;
}
application(int a){
ram = a;
hd_card = 1;
}
application(int a, int b){
ram = a;
hd_card = b;
}
void display(){
cout<<"Required system: ";
cout<<"\nRam: "<<ram<<"\nHd card: "<<hd_card;
}
};
int main(){
int a, b;
clrscr();
cout<<"Ram: ";cin>>a;
cout<<"Hd_card: ";cin>>b;
application a1;
application a2(a);
application a3(a,b);
cout<<"\n1. Game req: \n";
a1.display();
cout<<"\n2nd game req: \n";
a2.display();
cout<<"\n3rd game req: \n";
a3.display();
getch();
return 0;
}