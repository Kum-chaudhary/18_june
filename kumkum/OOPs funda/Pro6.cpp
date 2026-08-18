#include<iostream>
using namespace std;
class Student
{
	public:
		// data member
		int id;
		
		// member fuction
		void input()
		{
			cout<<"Enter id:";
			cin>>id;
			
		}
		void display()
		{
			cout<<"id:"<<id;
		}
};
int main()
{
	//object creation
	Student s1=Student();
	s1.input();
	s1.display();
	return 0;
}