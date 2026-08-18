#include<iostream>   
using namespace std; 
class Parent
{
	public:
		void displayA()
		{
			cout<<"parent class properties here"<<endl;
		}
};
class Child:public Parent //inheritance
{
	public:
		void childDisplay()
		{
			cout<<"child class properties here";
		}
};
int main()    
{
	Child child = Child();
	child.displayA();
	child.childDisplay();
	return 0;
}
