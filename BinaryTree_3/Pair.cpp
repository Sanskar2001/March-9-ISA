#include <iostream>
using namespace std;

int func()
{
	return 20;
}

int* demo()
{
	int* arr=new int[2];

	arr[0]=20;
	arr[1]=2;

	return arr;
}

class Pair
{

	public:
	int hieght;
	int diameter;
};

  Pair myFunction()
  {

  	Pair p;
  	p.diameter=10;
  	p.hieght=5;

  	return p;

  }



int main()
{

	// int x=func();
	// cout<<x;


	// int* myArr=demo();

	// cout<<myArr[0]<<endl<<myArr[1];

	Pair ans=myFunction();

	cout<<ans.diameter<<endl<<ans.hieght;

}