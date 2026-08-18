#include<iostream>
using namespace std;
class Student
{
	int id;
	string name;
	public:
		void setId(int id)
		{
			this->id = id;
		}
		int getId()
		{
			return id;
		}
		void setName(string name)
		{
			this->name = name;
			
		}
		string getName()
		{
			return name;
		}
};
int main()
{
	Student student=Student();
	student.setId(101);
	cout<<student.getId()<<endl;
	
	student.setName("Kumkum");
	cout<<student.getName();
	
	return  0;
}