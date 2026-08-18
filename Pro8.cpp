#include<iostream>   
using namespace std; 
class Student
{
	public:
		Student() //constructor
		{
			cout<<"welcome to student application --- constructor";
		}
		void intro()
		{
			cout<<"\n welcome to student application --- method";
		}
		
};
int main()    
{
	Student obj = Student();
	obj.intro();
	Student obj1 = Student();
	return 0;
}
