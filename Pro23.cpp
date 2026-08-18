#include<iostream>   
using namespace std;
class Parent
{
	public:
		void home()
		{
			cout<<"\n home given by Parent";
		}
};
class Child1:public Parent
{
	
};
class Child2:public Parent
{
}; 
int main()    
{
	Child1 obj1=Child1();
	Child2 obj2=Child2();
	obj1.home();
	obj2.home();
	return 0;
}
