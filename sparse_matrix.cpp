#include<iostream.h>
#include<conio.h>
int main(){
int a[20][20],r,c,s=0,i,j, res[3][20];
clrscr();
cout<<"Enter the size of matrix\n";
cout<<"Rows: ";
cin>>r;
cout<<"Columns: ";
cin>>c;
cout<<"Enter data for "<<r<<"x"<<c<<":- \n";
for(i = 1;i<=r;i++){
for(j = 1; j<=c; j++){
cout<<"a["<<i<<j<<"]: ";
cin>>a[i][j];
}}
for(i = 1; i<=r; i++){
for(j = 1; j<=c;j++){
if(a[i][j]!=0){
s++;
res[0][s] =i;
res[1][s]=j;
res[2][s] = a[i][j];
}
else{
continue;
}}}
for(int b=0;b<3;b++){
if(b==0){
cout<<"Rows: ";
}
else if(b==1){
cout<<"Columns: ";
}
else{
cout<<"Values: ";
}
for(int d = 1;d<=s;d++){
cout<<res[b][d]<<" ";
}
cout<<"\n";
}
getch();
return 0;
}