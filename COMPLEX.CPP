#include<stdio.h>
#include<conio.h>
#include<iostream.h>
	class complex
	{
	  int a,b;
	  public:
	void init(int x,int y)
	   {
	    a=x;
	    b=y;
	   }
	void disp()
	   {
	    cout<<a<<" +i "<<b<<endl;
	   }
	void sum(complex m,complex n,int i)
	   {
	    a=m.a+n.a+i;
	    b=m.b+n.b+i;
	   }
	};
void main()
{
 complex ob1,ob2,ob3;
 clrscr();
 float a,b;
 cout<<"Enter the number";
 cin>>a>>b;
 ob1.init(a,b);
 cout<<"Enter the number";
 cin>>a>>b;
 ob2.init(a,b);
 ob3.sum(ob1,ob2,5);
 cout<<"Complex numbers are";
 ob1.disp();
 ob2.disp();
 cout<<"Sum is ";
 ob3.disp();
 ob3.disp();

}

