#include<iostream.h>
#include<conio.h>
//find the sqaure root
int main(){
double n,temp,a,b ,root;
int ar[] = {1,4,9,16,25,36,49,64,81,100,121,144,169,196,225,256,289,324,361,400};
clrscr();
cout<<"It will give you the value of square root value till 400\n";
cout<<"Enter number: ";
cin>>n;
for(int i = 1;i<=12;i++){
if(ar[i]>n){
 break;
}
}
a = n-ar[i-1];
b = ar[i]-n;
if(a<=b){
i = i;
root = i+(a/(2*i));
}
else{
i = i+1;
cout<<i<<"\n"<<b<<"\n";
root = i-(b/(2*i));
}
cout<<"approximate square root is : "<<root;
getch();
return 0;
}