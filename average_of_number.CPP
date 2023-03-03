//Find average of number
#include<iostream.h>
#include<conio.h>
int main(){
float n, sum = 0, val, avg;
clrscr();
cout<<"Enter number of digits: ";
cin>>n;
for(int i = 0; i<n;i++){
cout<<"Digit "<<i<<".: ";cin>>val;
sum = sum+val;
}
avg = sum/n;
cout<<"Avegrage: "<<avg;
getch();
return 0;
}