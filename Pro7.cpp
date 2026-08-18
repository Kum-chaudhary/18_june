#include<iostream >
using namespace std;
class student
{
	public:
		// data member
		int id;
		string name;
		string subject;
		int score;
		
		// member fuction
		void inputdata()
		{
			cout<<"Enter id:";
			cin>>id;
			cout<<"Enter name:";
			cin>>name;
			cout<<"Enter subject:";
			cin>>subject;
			cout<<"Enter score:";
			cin>>score;
		}
};
int main()
{
	student obj = student();
	obj.inputdata();
	return 0;
}