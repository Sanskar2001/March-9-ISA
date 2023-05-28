#include <iostream>
using namespace std;

int add(int x,int y)
{
	return x+y;
}

float add(float x,float y)
{
	return x+y;
}

int add(int x,int y,int z)
{
	return x+y+z;
}

// float addFloatNos(float x,float y)
// {
// 	return x+y;
// }

int main()
{

	int a=10,b=20;


	float i=10.01f,j=5.09f;

	// 10.01
	// +5.09
	// 15.10

	cout<<add(a,b)<<endl;
	cout<<add(i,j)<<endl;
	cout<<add(10,20,30)<<endl;
	// cout<<addFloatNos(i,j);


}