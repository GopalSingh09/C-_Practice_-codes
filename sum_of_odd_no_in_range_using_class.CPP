#include<iostream.h>
#include<conio.h>
class sum
{
 int s;
 public:
 void get_val(int a, int b)
 {
  s = 0;
  for(int i = a;i<=b;i++)
  {
   if(i%2!=0)
   {
    s = s+i;
   }
  }
 }
 void display()
 {
  cout<<"Sum: "<<s;
 }
};

int main(){
int a, b;
clrscr();
cout<<"Enter the ranger till you want\n";
cout<<"Starting: ";cin>>a;
cout<<"Ending: ";cin>>b;
sum l;
l.get_val(a,b);
l.display();
getch();
return 0;
}