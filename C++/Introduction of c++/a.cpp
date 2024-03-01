#include<iostream>
#include<string>
using namespace std;

class printData
{
	public:

    void print(int i)
	{
		cout<<"Value  : "<<i<<endl;
	}

	void print(int i,int j)
	{
		cout<<"Value  : [ "<<i<<","<<j<<" ]"<<endl;
	}

	void print(const char s[] )
	{
		cout<<"Value  : \""<<s<<"\""<<endl;
	}
};

int main()
{
	printData ob;
	ob.print(11);
	ob.print(11,22);
	ob.print("TCA");
	
}