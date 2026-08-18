#include<iostream>
using namespace std;
class Student
{
	int id;
	string name;
	
	public:
		void setId(int id)
		{
			this->id=id;
		}
		int getId()
		{
			return id;
		}
};
int main()
{
	Student s1 = Student(11,"kumkum");
	s1.display();
	return 0;
}