//Number is armstrong or not
#include<iostream.h>
#include<conio.h>
#include<math.h>
int main(){
int val ,a, num ,t ,l=0, sum = 0;
clrscr();
cout<<"Enter digit: ";
cin>>val;
a = num = val;
while(a>0){
a = a/10;
l++;
}
cout<<"Length of digit: "<<l<<"\n";
while(num>0){
t = num%10;
num = num/10;
sum = sum +pow(t,l);
cout<<t<<"^"<<l<<"+";
}
cout<<"\nSum: "<<sum;
if(sum == val){
cout<<"\nthe number is armstrong";
}
else{
cout<<"\nNumber is not an armstrong";
}
getch();
return 0;
}