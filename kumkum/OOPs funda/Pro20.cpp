#include<iostream> 
//constructor overloading
  
using namespace std;
class Sample
{
	public:
		Sample()
		{
			cout<<"this is const"<<endl;
		}
		Sample(int a)
		{
		   cout<<"\n a ="<<a<<endl;	
		}
		Sample(int a,int b)
		{
			cout<<"\n a ="<<a<<"b = "<<b;
		}
		
}; 
int main()    
{
	Sample obj1=Sample();
	Sample obj2 =Sample(10);
	Sample obj3 =Sample(10,20);
	return 0;
}
