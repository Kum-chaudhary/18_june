#include<iostream>   
using namespace std; 
class student
{
	public:
		student()
		{
				cout<<"welcome to student application --- constructor";
		}
		~student()
		{
			cout<<"thank you for visiting";
		}
};
int main()    
{
	student obj = student();	
	return 0;
}

