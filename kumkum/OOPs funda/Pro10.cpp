#include<iostream>   
using namespace std; 
class Student

{
	//data member
	int id;
	string name;
	
	public:
		Student(int idValue,string nameValue)
		{
			id = idValue;
			name = nameValue;
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
