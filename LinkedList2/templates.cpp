#include <iostream>
using namespace std;
template<typename T>
class Box
{	
	public:
	T data;
	int sNo;
};

int main()
{


	Box<int>mybox;
	mybox.data=10;


	Box<char>charBox;
	charBox.data='a';

	Box<string>stringBox;
	stringBox.data="Hello";



	
	cout<<mybox.data<<endl;
	cout<<charBox.data<<endl;
	cout<<stringBox.data<<endl;

}