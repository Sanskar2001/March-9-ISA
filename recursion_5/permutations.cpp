#include <iostream>
using namespace std;

void permutation(char str[],int pos)
{
	if(pos==strlen(str))
	{
		cout<<str<<endl;
		return;
	}


	for(int i=pos;i<strlen(str);i++)
	{
		
		// pos->pos
		// pos->pos+1
		// pos->pos+2
		// pos->pos+3
		// ....
		// ....
		// pos->n-1

		int tmp=str[pos];
		str[pos]=str[i];
		str[i]=tmp;

		permutation(str,pos+1);

		// Backtracking
		 tmp=str[pos];
		str[pos]=str[i];
		str[i]=tmp;
	}

}

int main()
{
	char str[]="abc";
	permutation(str,0);
}