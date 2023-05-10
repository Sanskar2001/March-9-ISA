#include <iostream>
using namespace std;

void generateParen(int open,int close,int n,string ans)
{
	if(open==close && open==n)
	{
		cout<<ans<<endl;
		return;
	}


	// op1-> Place an opening bracket
	if(open<n)
	{
	
		generateParen(open+1,close,n,ans+'(');

	}

	// op2-> Place a closing bracket
	if(close<open)
	{
		
		generateParen(open,close+1,n,ans+')');
	}


}

int main()
{
	int n=2;
	generateParen(0,0,n,"");
}