#include<iostream.h>
#include<conio.h>
struct book{
char name[20];
float sc;
char auther[20];
int price;
};
int main()
{
book s[10];
int i,n;
clrscr();
cout<<"enter your favourite book details:";
cin>>n;
cout<<"enter book details"<<endl;
for(i=0;i<n;i++)
{
cout<<endl<<"enter book name:";
cin>>s[i].name;
cout<<"enter subject code:";
cin>>s[i].sc;
cout<<"enter auther name:";
cin>>s[i].auther;
cout<<"enter book price:";
cin>>s[i].price;
}
cout<<endl<<"display book details"<<endl;
for(i=0;i<n;i++)
{
cout<<"book name:"<<s[i].name<<endl;
cout<<"book subject code:"<<s[i].sc<<endl;
cout<<"auther name:"<<s[i].auther<<endl;
cout<<"book price:"<<s[i].price<<endl;
cout<<endl;}
getch();
return 0;
}