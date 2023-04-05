#include <iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;

	int i=1;


	while(i*i<n)
	{

		i++;
	}

	if(i*i>n)
	i--;

	cout<<"Sqroot of "<<n<<" is "<<i<<endl;

	// (26)^0.5=5.099

	return 0;
}