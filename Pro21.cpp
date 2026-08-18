#include<iostream>   
using namespace std; 
class Parent
{
	public:
	void display()
	{
		cout<<"Welcome to Parent class"<<endl;
	}
	
};
class Child:public Parent
{
	public:
	void display()
	{
		// scope resolution operator to access another class properties
		//parent class properties child class display
		Parent::display();
		cout<<"Welcome to child class"<<endl;
	}
};
int main()    
{
	Child obj = Child();
	obj.display();
	return 0;
}
