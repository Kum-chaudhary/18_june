#include<iostream>   
using namespace std; 
class RBI
{
	public:
		virtual void roi() = 0;
};
class SBI:public RBI
{
	public:
		void roi()
		{
			cout<<"\n SBI rate of interest is : 8.5";
		}
};
class BOB:public RBI
{
	public:
		void roi()
		{
			cout<<"\n BOB rate of interest is : 6.7";
		}
};

int main()    
{
	SBI sbi = SBI();
	BOB bob = BOB();
	
	sbi.roi();
	bob.roi();
	return 0;
}
