#include<iostream.h>
#include<conio.h>
//check whether character is vowel of consonant
int main(){
char c, cr[] = {'a','e','i','o','u'};
int a = 0;
clrscr();
cout<<"Enter character: ";
cin>>c;
for(int i=0;i<5;i++){
if(c==cr[i]){
cout<<"Character is vowel";
a = 1;
break;
}
}
if(a == 0){
cout<<"Character is consonant";
}
getch();
return 0;
}