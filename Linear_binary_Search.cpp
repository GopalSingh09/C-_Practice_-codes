#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
int main(){
int
n,ch,p=0,list[40]={0,1,2,4,4,5,6,7,9,10,12,13,16,18,19,20,25,27,30,32,34,36,40,45,47,50,57,60,61,66,70,76,80,85,86,88,9
0,91,97,99};
int start=0, end=39,mid;
clrscr();
cout<<"List contains random number from 0 to 100\n";
cout<<"Enter the method you want to use for search:\n1. Linear search\n2. Binary search\n3. Exit\n";
cin>>ch;
do{
switch(ch){
case 1:{
cout<<"Enter number to search: ";
cin>>n;
for(int i=0; i<40;i++){
if(list[i]==n){
cout<<n<<" found at "<<i+1<<"\n";
p++;
}
else{
continue;
}
}
if(p==0){
cout<<"Searched number is not found\n";
}
break;
}
case 2:{
cout<<"Enter number to search: ";
cin>>n;
while(start<= end){
mid = (start + end) / 2;
if(list[mid]>n){
end = mid-1;
}
else if(list[mid]<n){
start = mid+1;
}
else if(list[mid] == n){
cout<<n<<" found at "<<mid+1<<"\n";
break;
}
}
if(list[mid]!=n){
cout<<"Searched number not found\n";
}
break;
}
case 3:{
exit(0);
break;
}
default: {
cout<<"Invalid input.\n";
break;
}
}
cout<<"Enter choice: ";
cin>>ch;
}while(1);
getch();
return 0;
}