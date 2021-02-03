#include<iostream.h>
#include<conio.h>

int volume(int s)
{
	int temp;
	temp=s*s*s;
	return temp;
}
double volume(double r,int h)
{
	double temp;
	temp=3.14*r*r*h;
	return temp;
}
long volume(long r,int b,int h)
{
	long temp;
	temp=r*b*h;
	return temp;
}
void main()
{
	clrscr();
	int ans,a;
	double res,b,c;
	long res1,d,e,f;

	cout<<"Enter a number to find volume of cube:"<<endl;
	cin>>a;
	ans=volume(a);
	cout<<"Volume of cube is:"<<ans<<endl;

	cout<<"Enter numbers to find volume of cylinder:"<<endl;
	cin>>b>>c;
	res=volume(b,c);
	cout<<"Volume of cylinder is:"<<res<<endl;

	cout<<"Enter  numbers to find volume of rectangular box:"<<endl;
	cin>>d>>e>>f;
	res1=volume(d,e,f);
	cout<<"Volume of rectangular box is:"<<res1<<endl;
	getch();

}