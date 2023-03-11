//Linear search using recursion
#include<iostream.h>
#include<conio.h>

int func(int x, int y, int z[], int p){
if(z[p] == x){
return p;
}
else if(p>y){
return 0;
}
func(x, y,z, p+1);
}

int main(){
int ot, b = 0,l = 0,n ,a[100] = {1,2,3,4,5,6,7,8,9,10,12,14,16,18,20,30,31,32,33,35,37,38,39,50,49,48,47,45,62,61,78,98,73,44,88,99,100};
clrscr();
cout<<"Array contains random numbers from 1 to 100\n";
cout<<"Enter number to search: ";
cin>>n;
for(int i = 0;i<100;i++){
if(a[i]!='\0'){
l++;
}
}
ot = func(n, l, a, b);
if(ot == 0){
cout<<"Item did not found";
}
else{
cout<<"Item found at: "<<ot+1;
}
getch();
return 0;
}