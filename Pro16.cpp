#include<iostream>   
using namespace std;
class A
{
   public:
   int a,b;
   void inputA()
   {
   	cout<<"Enter num 1:";
   	cin>>a;
   	cout<<"Enter num 2:";
   	cin>>b;
   }	
};
class B
{
	public:
   int c,d;
   void inputB()
   {
   	cout<<"Enter num 3:";
   	cin>>c;
   	cout<<"Enter num 4:";
   	cin>>d;
   }
};
class C:public A,public B
{
	public:
	void Addition()
	{
		cout<<"Addition:"<<a+b;
		cout<<"\n sub:"<<a-b;
	}
	void mult()
	{
		cout<<"\n multiplication:"<<c*d;
	}
};
int main()    
{
	C c=C();
	c.inputA();
	c.inputB();
	c.Addition();
	c.mult();
	return 0;
}
