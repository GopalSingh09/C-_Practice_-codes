//Student details using class
#include<iostream>
#include<string>
using namespace std;
class student{
public:
long int roll;
string name;
string gen;
string f_name;
string m_name;
string address;
long int phone;
};
class acadmic:public student{
string cla;
string sec;
float atten;
string record;
public:
void get_ac_data(){
cout<<"Enter roll number: ";cin>>roll;
cout<<"Enter name: ";cin>>name;
cout<<"Enter gender: ";cin>>gen;
cout<<"Enter Phone number: ";cin>>phone;
cout<<"Enter father's name: ";cin>>f_name;
cout<<"Enter mother's name: ";cin>>m_name;
cout<<"Enter address: ";cin>>address;
cout<<"In which class is studying: ";cin>>cla;
cout<<"Section/group: ";cin>>sec;
cout<<"Attendence: ";cin>>atten;
cout<<"Any sports: ";cin>>record;
}
void display(int s){
cout<<s+1<<". "<<roll<<" "<<name<<" "<<gen<<" "<<f_name<<" "<<m_name<<" "<<address<<" "<<phone<<" "<<cla<<" "<<sec<<" "<<atten<<" "<<record<<"\n";
}
};
int main(){
int a=0, i=1;
acadmic ac[10];
for(int j = 0;j<=10;j++){
ac[j].get_ac_data();
cout<<"Another student1/0: ";cin>>a;
if(a==1){
break;
}
i++;
}
cout<<"S.n Roll n. Name Gender F name M name Adrs  Class  Section Attend Sports\n" ;
for(int k = 0; k<i;k++){
ac[k].display(k);
cout<<"\n";
}
return 0;
}