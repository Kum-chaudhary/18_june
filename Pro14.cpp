#include<iostream>   
using namespace std;
class A
{
    public:
	int a,b;
	
	void input()
	{
		cout<<"Enter a:"<<endl;
		cin>>a;
		cout<<"Enter b:"<<endl;
		cin>>b;
		}	
};
class B:public A
{
	public:
		int ans;
			void display()
			{
				cout<<"addition:"<<a+b;	
			}
}; 
int main()    
{
	B b=B();
	b.input();
	b.display();
	return 0;
}
