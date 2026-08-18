#include<iostream>   
using namespace std; 
class A 
{
	public:
		void displayA()
		{
			cout<<"A class is here"<<endl;
		}
};
class B :virtual public A
{
	public:
		void displayB()
		{
			cout<<"B class is here"<<endl;
		}
};
class C:virtual public A
{
	public:
		void displayC()
		{
			cout<<"C class is here"<<endl;
		}
};
class D:public B,public C
{
	public:
	void displayD()
	{
		cout<<"D class is here"<<endl;
	}
};
int main()    
{
	D d=D();
	d.displayA();
	d.displayB();
	d.displayC();
    d.displayD();
	return 0;
}
