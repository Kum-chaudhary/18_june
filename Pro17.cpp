#include<iostream>   
using namespace std; 
class RBI
{
     public:
	 void rbi()
	 {
	 	cout<<"\n reserve bank of india";
			 }		
};
class SBI:public RBI
{
	public:
		void sbi()
		{
			cout<<"\n state bank of india";
		}	
};
class BOB:public SBI
{
	public:
		void bob()
		{
			cout<<"\n bank of baroda";
		}
};
int main()    
{
	cout<<"\n ----------SBI------ "<<endl;
	SBI s1 = SBI();
	s1.sbi();
	s1.rbi();
	cout<<"\n -----------BOB-------"<<endl;
	BOB s2 = BOB();
	s2.bob();
	s2.rbi();
	
	
	return 0;
}
