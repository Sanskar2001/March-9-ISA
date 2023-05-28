#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int>v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);
	v.push_back(60);


	for(int i=0;i<v.size();i++)
	cout<<v[i]<<" ";


	vector<int>v2(5);
	v2[0]=1;
	v2[1]=2;
	v2[2]=3;
	v2[3]=4;
	v2[4]=5;
	v2.push_back(200);
	v2.pop_back();

	cout<<"Capacity="<<v2.capacity();

	
	cout<<endl;

	cout<<v2.empty()<<endl;

	for(int i=0;i<v2.size();i++)
	cout<<v2[i]<<" ";



}