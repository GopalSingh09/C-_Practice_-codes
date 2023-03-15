#include<iostream>
#include<string.h>
using namespace std;
class book_a{
public:
int book_no;
string book_name;
void get_data(){
cout<<"Enter book no.: ";
cin>>book_no;
cout<<"Enter book name: ";
cin>>book_name;
}
};
class book_b{
public:
string author;
string publisher;
void get_data(){
cout<<"Enter author name: ";
cin>>author;
cout<<"Enter publisher: ";
cin>>publisher;
}
void show_data(){
cout<<author<<" ";
cout<<publisher<<" ";
}
};
class book_c:public book_a,public book_b{
public:
int pages;
int year;
void get_data(){
book_a::get_data();
book_b::get_data();
cout<<"Enter number of pages: ";
cin>>pages;
cout<<"Enter year: ";
cin>>year;
}
void display(){
 cout<<"\n";
cout<<book_no<<" ";
cout<<book_name<<" ";
show_data();
cout<<pages<<" ";
cout<<year<<"\n\n";
}
};
int main(){
book_c b[5];
for(int i=0;i<3;i++){
b[i].get_data();
}
cout<<"No."<<" "<<"Name"<<"\t\t"<<"Author"<<"\t\t"<<"Publisher"<<"\t\t"<<"Pages"<<"\t"<<"year";
for(int j = 0;j<3;j++){
b[j].display();
}
return 0;
}