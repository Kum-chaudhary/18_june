#include<iostream>   
using namespace std;
class Student
{
	//data member
	int id;
	string name;
	
	public:
		Student(int id,string name) //this pointer
		{
			this->id = id;
			this->name = name;
		}
		void display()
		{
			cout<<"\n Id :"<<id;
			cout<<"\n Name :"<<name;
		}
};
int main()    
{
	Student obj = Student(11,"Kumkum");
	obj.display();
	return 0;
}
