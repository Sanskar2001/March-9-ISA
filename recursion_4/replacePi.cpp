#include<iostream>
using namespace std;
void replaceWithPi(string str,int pos,string ans)
{

	if(pos>=str.length())
	{
		cout<<ans;
		return;
	}

	if(str[pos]=='p' && str[pos+1]=='i')
	{
		ans+="3.14";
		pos+=2;
	}
	else
	{
		ans+=str[pos];
		pos+=1;
	}
	

	replaceWithPi(str,pos,ans);

}
int main()
{
	string str="abpcpidepif";
	// abpc3.14de3.14f

	replaceWithPi(str,0,"");


}