#include<conio.h>
#include<string.h>
#include<iostream.h>
class author

{       // dm  mm......mm....access
	int id;
	char name[45];
	char ranking[5];
	public:
	void setdata(int x)
	{
	  id=x;

	}
	void setdata(int x,char *nm,char *rk)
	{
	  id=x;
	  strcpy(name,nm);
	  strcpy(ranking,rk);
	}
	void setdata(int x,char *nm)
	{
	  id=x;
	  strcpy(name,nm);
	  strcpy(ranking," ");
	}
	void displaydata()
	{

	cout<<endl<<"Details are:;;"<<endl;
	cout<<id<<endl<<name<<endl<<ranking;

	}

};

int main()
{
clrscr();
	author a1;
	a1.setdata(1,"Aman","***");
	a1.displaydata();
	a1.setdata(102)   ;
	a1.displaydata();
	a1.setdata(103,"Amit")   ;
	a1.displaydata();

 return 0;

}