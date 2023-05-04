#include <iostream>
using namespace std;

void generateSubseq(string input,string ans,int idx)
{
	if(idx==input.length())
	 {	cout<<ans<<" ";
		return;
	}

	// exclude the current char
	char ch=input[idx];
	generateSubseq(input,ans,idx+1);

	// include the current char
	generateSubseq(input,ans+ch,idx+1);
}

int main()
{
	string str="abc";

	generateSubseq(str,"",0);
}