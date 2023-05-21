#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
void heading()
{
  cout<<"\n\n\t\t*************************"<<endl;
  cout<<"\t\t       Quiz Game"<<endl;
  cout<<"\t\t*************************"<<endl;
}
struct student
{
char name[20];
int r_no;
int marks;
};
 student st;
void cpp()
{
char choice;
st.marks=0;
	cout<<"What is main feature of oop ?\n";
	cout<<"A. class\n";
	cout<<"B. object\n";
	cout<<"C. overloding\n";
	cout<<"D. Inline\n";
choice=getch();
if(choice=='A'||choice=='a')
{
	cout<<"your answer is correct\n\n";
	st.marks++;
}
else
{
cout<<"your answer is wrong\n\n";
}
	cout<<"What is full form of oop ?\n";
	cout<<"A. oriented object programming\n";
	cout<<"B. object office process\n";
	cout<<"C. object oriented programming\n";
	cout<<"D. object oriented process\n";
choice=getch();
if(choice=='C'||choice=='c')
	{
	cout<<"your answer is correct\n\n";
	st.marks++;
	}
else
	{
	cout<<"your answer is wrong\n\n";
	}
	cout<<"What is application of C++ ?\n";
	cout<<"A. real time system\n";
	cout<<"B. inheritance\n";
	cout<<"C. dynamic binding\n";
	cout<<"D. encapsulation\n";
choice=getch();
if(choice=='A'||choice=='a')
	{
	cout<<"your answer is correct\n\n";
	st.marks++;
	}
else
	{
	cout<<"your answer is wrong\n\n";
	}
	cout<<"What is feature of oop ?\n";
	cout<<"A. hypertext\n";
	cout<<"B. hypermedia\n";
	cout<<"C. overloding\n";
	cout<<"D. nureal network\n";
choice=getch();
if(choice=='C'||choice=='c')
	{
	cout<<"your answer is correct\n\n";
	st.marks++;
	}
else
	{
	cout<<"your answer is wrong\n\n";
	}
}

void c()
{
	char choice;
st.marks=0;
	cout<<"What is special variable ?\n";
	cout<<"A. array\n";
	cout<<"B. pointer\n";
	cout<<"C. datatype\n";
	cout<<"D. union\n";
choice=getch();
if(choice=='B'||choice=='b')
{
	cout<<"your answer is correct\n\n";
	st.marks++;
}
else
{
cout<<"your answer is wrong\n\n";
}
	cout<<"What is group of elemints which having common name ?\n";
	cout<<"A. string\n";
	cout<<"B. variable\n";
	cout<<"C. pointer\n";
	cout<<"D. array\n";
choice=getch();
if(choice=='D'||choice=='d')
	{
	cout<<"your answer is correct\n";
	st.marks++;
	}
else
	{
	cout<<"your answer is wrong\n";
	}

}

void html()
{
char choice;
st.marks=0;
	cout<<"HTML is used in______\n";
	cout<<"A. webpage design\n";
	cout<<"B. software update\n";
	cout<<"C. hacking\n";
	cout<<"D. making apps\n";
choice=getch();
if(choice=='A'||choice=='a')
{
	cout<<"your answer is correct\n\n";
	st.marks++;
}
else
{
cout<<"your answer is wrong\n\n";
}
	cout<<"How to make sentences bold ?\n";
	cout<<"A. <lable>\n";
	cout<<"B. <br>\n";
	cout<<"C. <u>\n";
	cout<<"D. <b>\n";
choice=getch();
if(choice=='D'||choice=='d')
	{
	cout<<"your answer is correct\n";
	st.marks++;
	}
else
	{
	cout<<"your answer is wrong\n";
	}

}
void result()
{
	int per=0;
	cout<<"student name:"<<st.name<<endl;
	cout<<"roll name:"<<st.r_no<<endl;
	cout<<"marks: "<<st.marks<<" out of 4\n";
	per=100* st.marks/4;
	cout<<"persentage : "<<per<<"%"<<endl;
	if(per>=40)
	{
	cout<<"status = PASS\n";
	}
	else
	{
	cout<<"status = FAIL\n";
	}
}

int main()
{
  char press,select;


  clrscr();
  do
  {
	system("CLS");
	heading();
	cout<<"\t\tenter name:";
	cin>>st.name;
	cout<<"\t\tenter roll no:";
	cin>>st.r_no;

	system("CLS");

	cout<<"\t\tIF marks will be less than 40% you are FAIL"<<endl<<endl;
	cout<<"1) c++"<<endl;
	cout<<"2) c"<<endl;
	cout<<"3) HTML"<<endl;
	select=getch();

	system("CLS");

	switch(select){
	case '1':
	cout<<"\t\tc++ quiz\n\n"<<endl;
	cpp();
	system("CLS");
	cout<<"\t\tC++ quiz result\n\n";
	result();
	break;

	case '2':
	cout<<"\t\tc quiz\n\n"<<endl;
	c();
	break;

	case '3':
	cout<<"\t\thtml quiz\n\n"<<endl;
	html();
	break;

	defult:
	cout<<"Invalid input"<<endl;
	break;}

	cout<<"Press Y/y to Continue or any key press to Exit"<<endl;
	press=getch();
  }
  while(press=='y'||press=='Y');
  return 0;
}