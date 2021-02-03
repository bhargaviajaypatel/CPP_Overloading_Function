#include<iostream.h>
#include<conio.h>

int add(int a, int b)
{
	  int temp;
	  temp=a+b;
	  return temp;
}

int add(int a, int b, int c)
{
	  int temp;
	  temp=a+b+c;
	  return temp;
}

double add(double x , double y)
{
	   int temp;
	   temp=x+y;
	   return temp;
}

double add(int p, double q)
{
	  double temp;
	  temp=p+q;
	  return temp;
}

double add(double p, int q)
{
	 double temp;
	 temp=p+q;
	 return temp;
}

void main()
{
	     clrscr();

	     cout<<add(5,10)<<endl;
	     cout<<add(15,12.5)<<endl;
	     cout<<add(14.5,13.8)<<endl;
	     cout<<add(5,10,15)<<endl;
	     cout<<add(1.5,8)<<endl;

	     getch();
}
