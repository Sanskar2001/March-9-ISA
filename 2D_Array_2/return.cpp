#include <iostream>
using namespace std;
void fun()
{
	for(int i=0;i<10;i++)
	{
		if(i==5)
		return;
	}

	cout<<"hello";
}
int main()
{

	fun();
	


}