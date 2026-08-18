#include<iostream>   
using namespace std; 
class Student
{
	public:
		void signup(string contactno)
		{
			cout<<"register using contact no"<<endl;
		}
		void signup(string username, int password)
		{
			cout<<"register using username and password"<<endl;
		}
};	
int main()    
{
	Student student=Student();
	student.signup("9081496345");
	student.signup("Kumkum@3820gmail.com",1311);
	return 0;
}
