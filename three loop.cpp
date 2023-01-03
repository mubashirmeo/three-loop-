#include <iostream>
using namespace std;
int main()
{
		{
		int i;
		for(i=1; i<=10; i++)
	{
			if(i==5)
			continue;
			cout<<"for =" <<i*i<<endl;
		}
}
	{
		int i=0;
		while(i<10)
		{
			i++;
			if(i==5)
			continue;
			cout<<"while =" <<i*i<<endl;
		}
	}
	{
		int i=0;
		do
		{
			i++;
			if(i==5)
			continue;
			cout<<"do while =" <<i*i<<endl;	
		}
		while(i<10);
	}
     return 0 ;
}
