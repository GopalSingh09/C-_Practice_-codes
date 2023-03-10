//Program for student report card
#include<iostream.h>
#include<conio.h>
int main(){
long int roll;
int s[5];
double total= 0, per;
char grade[5], name[20], gender[10], ch[5];
clrscr();
cout<<"Name: ";cin>>name;
cout<<"Roll no.: ";cin>>roll;
cout<<"Gender: ";cin>>gender;
for(int i = 0;i<5;i++){
cout<<"subject"<<i<<": ";cin>>s[i];
total = total+s[i];
}
cout<<"-------------------------Report Card-------------------------------\n";
cout<<name<<"\n";
cout<<roll<<"\n";
cout<<gender<<"\n";
cout<<"Maths\tScience\tEnglish\tHindi\tS.st\n";
for(int j = 0;j<5;j++){
cout<<s[j]<<"\t";
}
cout<<"\nTotal: "<<total<<"\n";
per = (total/500)*100;
cout<<"Percentage: "<<per<<"%"<<"\n";
if(per>=90){
grade[5] = 'A1';
ch[5] = 'P';
}
else if(per>=85&&per<90){
grade[5] = 'A2';
ch[5] = 'P';
}
else if(per>=80&&per<85){
grade[5] = 'B1';
ch[5] = 'P';
}
else if(per>=75&&per<80){
grade[5] = 'B2';
ch[5] = 'P';
}
else if(per>=70&&per<75){
grade[5] = 'C1';
ch[5] = 'P';
}
else if(per>=65&&per<70){
grade[5] = 'c2';
ch[5] = 'P';
}
else if(per>=60&&per<65){
grade[5] = 'D1';
ch[5] = 'P';
}
else if(per>=55&&per<60){
grade[5] = 'D2';
ch[5] = 'P';
}
else if(per>=50&&per<55){
grade[5] = 'E1';
ch[5] = 'P';
}
else if(per>=45&&per<50){
grade[5] = 'E2';
ch[5] = 'P';
}
else if(per<45){
grade[5] = 'F';
ch[5] = 'F';
}
cout<<grade[5]<<"\n";
cout<<ch[5]<<"\n";
getch();
return 0;
}