#include<iostream>   
using namespace std; 
class Address
{ 
    public:
    	string city,state;
    	int pincode;
    	
    	Address(string city,string state,int pincode)
    	{
    		this->city = city;
    		this->state = state;
    		this->pincode = pincode;
		} 	
};
class Emp
{
	public:
		int id;
		string emp_name;
		Address *a;
		
		Emp(int id,string emp_name,Address *a)
		{
			this->id=id;
			this->emp_name=emp_name;
			this->a=a;
		} 
		void display()
		{
			cout<<"\n id: : "<<id;
			cout<<"\n name :"<<emp_name;
			cout<<"\n city :"<<a->city;
			cout<<"\n state :"<<a->state;
			cout<<"\n pincode:"<<a->pincode;
		}
};
int main()    
{
	Address address=Address("Ahm","guj",345678);
	Emp emp=Emp(101,"AAA",&address);
	emp.display();
	return 0;
}
